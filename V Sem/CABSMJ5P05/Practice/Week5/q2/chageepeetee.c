#include <stdio.h>

struct processes {
    int pid;
    int at;
    int bt;
};

void swap(struct processes *a, struct processes *b);
int part(struct processes *arr, int l, int h);
void qs(struct processes *arr, int l, int h);
void exec(struct processes *arr, int n);

int main(void) {
    int x;

    printf("Enter number of processes: ");
    if (scanf("%d", &x) != 1 || x <= 0) return 1;

    struct processes p1[x];

    for (int i = 0; i < x; i++) {
        printf("Enter pid, at and bt (pid at bt): ");
        scanf("%d %d %d", &p1[i].pid, &p1[i].at, &p1[i].bt);
    }

    qs(p1, 0, x - 1);

    printf("\nAFTER SORT:\nPID\tAT\tBT\n");
    for (int i = 0; i < x; i++) {
        printf("%d\t%d\t%d\n", p1[i].pid, p1[i].at, p1[i].bt);
    }

    exec(p1, x);

    return 0;
}

void swap(struct processes *a, struct processes *b) {
    struct processes temp = *a;
    *a = *b;
    *b = temp;
}

int part(struct processes *arr, int l, int h) {
    int piv = arr[h].at;
    int i = l - 1;

    for (int j = l; j < h; j++) {
        if (arr[j].at <= piv) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return i + 1;
}

void qs(struct processes *arr, int l, int h) {
    if (l < h) {
        int partt = part(arr, l, h);
        qs(arr, l, partt - 1);
        qs(arr, partt + 1, h);
    }
}

void exec(struct processes *arr, int n) {
    int ct = 0;

    printf("\n--- Execution Order & Timeline ---\n");
    for (int i = 0; i < n; i++) {
        // Advance current time directly to arrival time if CPU is idle
        if (ct < arr[i].at) {
            printf("[IDLE: %d -> %d] ", ct, arr[i].at);
            ct = arr[i].at;
        }

        int start_time = ct;
        ct += arr[i].bt;
        printf("[P%d: %d -> %d] ", arr[i].pid, start_time, ct);
    }
    printf("\n");
}