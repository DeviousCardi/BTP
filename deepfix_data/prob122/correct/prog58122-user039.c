#include <stdio.h>
int main() {
    int n,b,i,j;
    scanf("%d\n",&n);
    for(i=1;i<=n;i=i+1) {
        for(j=1;j<=n;j=j+1) {
            scanf("%d",&b); }
        scanf("\n"); }
    if(i==j) {
        b==1; }
    else {
        b==0;
        printf("GIVEN %d * %d matrix is an IDENTITY MATRIX",n,n); }
    return 0; }