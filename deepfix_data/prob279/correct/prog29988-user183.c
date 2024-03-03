#include <stdio.h>
int main() {
    int A[1000], n, i, j, count=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &A[i]); }
    for(i=0; i<n; i++) {
        for(j=1; j<n; j++) {
            if(A[i] == A[j])
                count++; }
        if(count>=2)
            printf("%d", A[i]); }
    return 0; }