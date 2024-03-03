#include <stdio.h>
int main() {
    int A[1000], n, i, j, count;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &A[i]); }
    for(i=0; i<n; i++) {
        count = 0;
        for(j=(n-i); j<n; j++) {
            if(A[i] == A[j])
                count = count + 1; }
        if(count > 1)
        printf("%d", A[i]); }
    return 0; }