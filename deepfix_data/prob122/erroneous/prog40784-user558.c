#include <stdio.h>
int main(){
    int i,j,n,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
        scanf("%d",&t);
        if(i==j && t!=1)
        printf("GIVEN n*n matrix is NOT an IDENTITY MATRIX");
        else if(i!=j && t!=0)
        printf("GIVEN n*n matrix is NOT an IDENTITY MATRIX");
        else if
        printf("GIVEN n*n matrix is an IDENTITY MARTRIX"); } }
    return 0; }