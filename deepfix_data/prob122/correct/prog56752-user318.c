#include <stdio.h>
int main() {
    int a,i,j,n;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
    {scanf("%d",&a);
    if((i==j)&(a!=1))
   { printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0;}
    else if((i!=j)&&(a!=1))
    {printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
        return 0; }
    else printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); } }
    return 0; }