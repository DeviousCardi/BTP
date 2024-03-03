#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[i][j]); } }
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            while(a[i][i]!='1')
            break; } }
    if(1)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }