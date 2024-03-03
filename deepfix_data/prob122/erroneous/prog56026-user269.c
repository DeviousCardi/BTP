#include <stdio.h>
int main()
{int rows,i,j,a,k;
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{for(j=1;j<=rows;j++)
    {scanf("%d",&k);
    if((i==j)&&(k==1)||(i!=j)&&(k==0)) printf("L");
   else printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX") ; }
    return 0; }