#include <stdio.h>
int main() {
    int n,i,j,count=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[i][j]); } }
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            if((a[i][i]==1)&&(a[i][j]==0))
            count++; } }
    if(count==n-1)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }