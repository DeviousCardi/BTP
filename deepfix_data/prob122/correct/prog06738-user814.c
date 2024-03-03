#include <stdio.h>
int main() {
    int n,i,j;
    int m;
    int z=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&m);
            if(i==j) {
                if(m!=1)
                z=1; }
            else {
                if(m!=0)
                z=1; } } }
    if(z==0) {
            printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
        else {
            printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }