#include <stdio.h>

int search(int arr[], int n, int what);

int main() {
    int n, i, ind, what;

    printf("Enter the size of the array N: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the valueto search: ");
    scanf("%d", &what);

    ind = search(arr, n, what);

    if (ind == -1) {
        printf("No element exists\n");
    }
    else {
        printf("Element %d found at %d", what, ind);
    }

}

int search(int arr[], int n, int what) {

    for (int i = 0; i < n; i++) {
        if (arr[i] == what) {
            return i;
        }
    }
    return -1;
}
