#include <stdio.h>
int main() {
    int n,i,j;
    int m;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
        scanf("%d",&m);
        if(i==j && m==1) {
            printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
        else if(i!=j && m!=0) {
            printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);      } } }
    return 0; }