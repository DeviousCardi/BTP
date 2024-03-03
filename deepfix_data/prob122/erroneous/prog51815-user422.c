#include <stdio.h>
int main(){
    int a,b,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    for (j=1;j<=i;j++)
    scanf("%d",&x);
    if ((i==j)!=1)
    { printf("GIVEN %dx%d matrix is NOT an IDENTITY MATRIX",n);}
    if ((i!=j)&&(x!=0))
    {printf("GIVEN %dx%d matrix is NOT an IDENTITY MATRIX",n);}
    }else {printf("GIVEN %dx%d matrix is an IDENTITY MATRIX",n);}
    return 0; }