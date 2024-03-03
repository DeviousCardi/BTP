#include <stdio.h>
int main(){
int n,m,i,j,sum=0,add=0;
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{for(j=1;j<=n;j=j+1)
  {scanf("%d",&m);
 if(i==j)
{if(m==1)
 sum=sum+1;}
 else
 if(m==0)
 {add=add+1;}}}
 if(sum==n&&add==((n-1)*n))
 printf("%d x %d matrix is an IDENTITY MATRIX",n,n);
 else
 printf("%d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }