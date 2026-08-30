
#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;

    printf("Enter Principal Amount: ");
    scanf("%lf", &principal);
    printf("Enter Rate of Interest: ");
    scanf("%lf", &rate);
    printf("Enter Time (in years): ");
    scanf("%lf", &time);

    // PRT/100
    printf("\nSimple Interest = %.2lf\n", (principal * rate * time) / 100);
    // P(1 + R/100)^T - P
    printf("Compound Interest = %.2lf\n", principal * pow((1 + rate / 100), time) - principal);

}