#include <stdio.h>

int hcf(int x, int y) {
    int temp;
    while (y!=0) {
        temp = x%y;
        x=y;
        y=temp;
    }
    return x;
}

/*int lcm(int x, int y) {
    int lcm, max = (x>y) ? x : y;
    lcm = max;

    while (1) {
        if (lcm%x == 0 && lcm%y == 0) {
            return lcm;
        }
        lcm += max;
    }
}*/

int main(void) {
    int x, y, h;
    printf("Enter two numbers (x, y): ");
    scanf("%d, %d", &x, &y);
    h = hcf(x, y);

    printf("HCF: %d, LCM: %d\n", h, (x * y) / h);
}
