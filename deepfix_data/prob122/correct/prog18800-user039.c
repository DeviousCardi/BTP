#include <stdio.h>
int main() {
    int n,b,x=0;
    int i,j;
    scanf("%d\n",&n);
    for(i=1;i<=n;i=i+1) {
        for(j=1;j<=n;j=j+1) {
            scanf("%d",&b);
            if(  ((i==j)&&(b!=1)) || ((i!=j) && (b!=0))   )
            x=1; }
        scanf("\n"); }
    if (x==0) {
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    else {
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }