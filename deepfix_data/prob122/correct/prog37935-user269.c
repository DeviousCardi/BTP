#include <stdio.h>
int main()
{int n,i,j,a,k,x;
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
    {scanf("%d",&k);
    if((i==j)&&(k==1)||(i!=j)&&(k==0)) x=1;
    else x=0;
}}if(x==1) printf("l");
else printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX");
    return 0; }