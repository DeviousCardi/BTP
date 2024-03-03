#include <stdio.h>
int main(){
    int n, i, j;
    scanf ("%d", n);
    printf("\n");
    int booknos[n];
    for (i=0; i<n; i++) {
        scanf ("%d", &booknos[i]) }
    printf("\n");
    if (n<100) {
        for (i=0; i<=n-2; i++) {
            printf ("%d ", booknos[i+1] ) }
        printf ("%d", booknos[0]); }
    printf("end");
    return 0; }