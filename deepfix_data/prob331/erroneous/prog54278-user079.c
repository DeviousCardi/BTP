#include <stdio.h>
int main(){
    int a[i][j],c=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a[i][j]);
            if(i==j && a[i][j]==1)
            c=c+1; } }
    if(c==n)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }