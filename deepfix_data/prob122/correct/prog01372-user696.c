#include <stdio.h>
int main(){
    int n;
    int i;
    int j;
    int a;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a);
            if(((i!=j)&&(a=0))&&((i=j)&&(a=1)))
            printf("GIVEN %d*%d matrix is an IDENTITY MATRIX",n,n);
            else
            printf("GIVEN %d*%d matrix is NOT an IDENTITY MATRIX",n,n); } }
    return 0; }