#include <stdio.h>
int main() {
    int i,j,n,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&m); } }
    if(i==j&&m==1)
    printf("GIVEN nxn matrix is an IDENTITY MATRIX");
    else
    printf("GIVEN nxn matrix is not IDENTITY MATRIX");
    return 0; }