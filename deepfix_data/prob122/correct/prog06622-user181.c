#include <stdio.h>
int main() {
    int n,a;
    scanf("%d",&n);
    int i,j,f=0;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
         scanf("%d",&a);
         if((i==j)&&(a==1))
            continue;
         else if((i!=j)&&(a==0))
            continue;
         else {
             f=1;
             break; } }
        if(f==1) {
         printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
             break; } }
        if((i==j)&&(i==n))
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }