#include <stdio.h>
#include <math.h>

int isprime(int x) {
    if (x == 0 || x == 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {

    int l, h;

    printf("Enter range(l:h): ");
    scanf("%d:%d", &l, &h);


    for (int i = l; i <= h; i++) {
        if (isprime(i) == 1) {
            printf("%d\n", i);
        }
    }
}
