#include <stdio.h>
int main() {
    int i,j,n,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&m);
            if((i==j&&m==1)||(i!=j&&m==0)) {
            if(i==j&&i==n)
            printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); } } }
    return 0; }