#include <stdio.h>
int main() {
    int n,i,j,m,k=5;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&m);
            if(i==j) {
                if(m!=1)
                k=k+1; }
            else if(i!=j) {
                if(m!=0)
                k=k+1; } } }
    if(k!=5) {
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    else {
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    return 0; }