#include <stdio.h>
int main() {
    int A[1000], n, i, count = 0;
    scanf("%d", &n);
    for(i=0; i<=n; i++) {
        scanf("%d", &A[i]);
        if(A[i] == A[i++])
            count = count + 1; }
    if(count > 1)
    printf("%d", A[i]);
    return 0; }