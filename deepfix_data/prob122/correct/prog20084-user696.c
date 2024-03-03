#include <stdio.h>
int main(){
    int n;
    int i;
    int j;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&n);
            if(((i!=j)&&(n=0))&&((i=j)&&(n=1)))
            printf("GIVEN %d*%d matrix is an IDENTITY MATRIX",n,n);
            else
            printf("GIVEN %d*%d matrix is NOT an IDENTITY MATRIX",n,n); } }
    return 0; }