#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d%d",&i,&j); } }
    if(i==j && i==1 && j==1) {
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    else if(i==0 || j==0) {
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }