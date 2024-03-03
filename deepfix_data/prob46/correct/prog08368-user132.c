#include <stdio.h>
int main(){
int m,n,p,i,sum=0;
scanf("%d%d",&m,&n);
p=n;
for(i=2;i<p;i++)
{if(n%i==0)
{n=n/i;
if(n%i!=0)
{sum=sum+1;}
i=i-1;}
if(m==sum)
{printf("YES");}
else
{printf("NO");}
return 0;
}}