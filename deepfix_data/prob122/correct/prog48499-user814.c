#include <stdio.h>
int main() {
    int n,i,j;
    int m;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&m);
        for(j=1;j<=n;j++) {
        if(i==j && m==1) {
            printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
        else if(i!=j ) {
            printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);      } } }
    return 0; }