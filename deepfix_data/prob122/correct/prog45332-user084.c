#include <stdio.h>
int main(){int i,j,no,n,e=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++) {
    scanf("%d",&no);
    if((i==j&&no!=1)||(i!=j&&no!=0))
    e++;}}
    if(e==0)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }