#include <stdio.h>
int main() {
    int n,i,j,a,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a);
            while(((i==j)&&(a==1))&&((i!=j)&&(a==0))) {
                x=1;
                x++; }
            while(((i==j)&&(a!=1))&&((i!=j)&&(a!=0))) {
                x=0;
                break; } } }
    if(x==1)
       printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else if(x==0)
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }