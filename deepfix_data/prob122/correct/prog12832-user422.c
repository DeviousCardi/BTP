#include <stdio.h>
int main(){
    int i,j,n,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    for (j=1;j<=i;j++)
    scanf("%d",&x);
    if ((i==j)&&(x!=1))
    { printf("GIVEN %dx%d matrix is NOT an IDENTITY MATRIX",n,n);}
    else{
    if ((i!=j)&&(x!=0))
    {printf("GIVEN %dx%d matrix is NOT an IDENTITY MATRIX",n,n);}
    else {printf("GIVEN %dx%d matrix is an IDENTITY MATRIX",n,n);}
    }}
    return 0; }