#include <stdio.h>

int safeseq(int avail, int max[], int alloc[], int need[], int x);
int req(int p_id, int req_amt, int avail, int max[], int alloc[], int need[], int x);

int main(void) {
    // Example test setup for 3 processes and 1 resource type (total 10 instances)
    /*int avail = 3;
    int x = 3;
    int max[]   = {7, 5, 9};
    int alloc[] = {0, 1, 2};
    int need[]  = {7, 4, 7};

    // Test a request: Process 1 requests 1 instance
    int result = req(1, 1, avail, max, alloc, need, x);*/

    int avail = 5;
    int x = 3;
    
    // Max demand for P0, P1, P2
    int max[]   = {7, 5, 6};
    
    // Currently allocated resources (Sum = 0 + 2 + 3 = 5. Total used + avail = 5 + 5 = 10)
    int alloc[] = {0, 2, 3};
    
    // Remaining need (max - alloc) -> {7, 3, 3}
    int need[]  = {7, 3, 3};

    // Test a safe request: Process 1 requests 1 instance
    int result = req(1, 1, avail, max, alloc, need, x);
    
    if (result == 1) {
        printf("\nRequest granted safely!\n");
    } else {
        printf("\nRequest denied (unsafe or insufficient resources).\n");
    }

    return 0;
}

int safeseq(int avail, int max[], int alloc[], int need[], int x) {
    int comp = 0, i;
    int finish[x];
    int work = avail;
    
    for(i = 0; i < x; i++){
        finish[i] = 0;
    }

    int progress;
    // Standard safety algorithm loop: keep making passes until no progress can be made
    do {
        progress = 0;
        for(i = 0; i < x; i++){
            if(finish[i] == 0 && need[i] <= work){
                work = work + alloc[i];
                finish[i] = 1;
                comp++;
                progress = 1;
                printf("P%d, ", i);
            }
        }
    } while(progress && comp < x);

    if(comp == x){
        return 1; // Safe
    }
    return 0; // Unsafe
}

int req(int p_id, int req_amt, int avail, int max[], int alloc[], int need[], int x) {
    // 1. Check if request exceeds declared need
    if(req_amt > need[p_id]){
        return 0; 
    }
    // 2. Check if request exceeds currently available resources
    else if(req_amt > avail){
        return 2; 
    }

    // 3. Tentatively allocate resources
    avail = avail - req_amt;
    alloc[p_id] = alloc[p_id] + req_amt;
    need[p_id] = need[p_id] - req_amt;

    // 4. Run safety check
    if(safeseq(avail, max, alloc, need, x) == 1){
        return 1; // Safe state, keep changes
    }
    
    // 5. If unsafe, you would normally rollback changes here 
    // (Note: since avail, alloc, and need are passed by value in this function signature, 
    // they don't permanently affect main unless passed as pointers, but this matches your structure).
    
    return 0; // Unsafe state
}