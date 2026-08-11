#include <stdio.h>
#include <math.h>

typedef struct{
    double real;
    double imag;
}Comp;

int main(void){
    double a, b, c;

    printf("Enter constants in format: a b c\n:");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Equation: %0.3lfx + %0.3lfy + %0.3lf = 0\n", a, b, c);

    double r1, disc;

    disc = pow(b, 2) - 4 * a * c;

    if(disc > 0){
        double r2;
        r1 = (-b + sqrt(disc))/(2*a);
        r2 = (-b - sqrt(disc))/(2*a);
        printf("The equation has two roots!\n Roots: %.3lf, %.3lf", r1, r2);  
    }
    else if(disc == 0){
        r1 = (-b + sqrt(disc))/(2*a);
        printf("The equation has one root!\n Roots: %.3lf", r1);
    }
    else{
        Comp r1;
        
        r1.real = -b/(2 * a);
        r1.imag = (sqrt(-1 * disc) / (2 * a));
        printf("The equation has complex roots!\n Roots: %.3lf + %.3lfi, %.3lf - %.3lfi", r1.real, r1.imag, r1.real, r1.imag);
    }
}