#include <stdio.h>
int main(){
    int n, i, j, p=0;
    scanf ("%d\n", &n);
    int a[n];
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            scanf("%d", &a[j]); }
        if((i==j)&&(a[i]==1)) {
                p=0;
                continue; }
            else if ((i!=j)&&(a[j]!=0)) {
                p=1;
                break; }
        printf("\n"); }
    if(p==1)
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX", n, n);
    else
    printf(" GIVEN %d x %d matrix is an IDENTITY MATRIX", n, n);
    return 0; }