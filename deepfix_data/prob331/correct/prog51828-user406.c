#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    int a[n][n];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]); }
    int flag=0;
    for(i=0;i<n;i++) {
        if(a[i][i]==1) {
            for(j=0;j<n;j++) {
                if((a[i][j]==0)&&(i!=j)) {
                    flag=1; } } } }
    if(flag==1)
    printf("GIVEN %dX%d matrix is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %dX%d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }