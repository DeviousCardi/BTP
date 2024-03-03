#include <stdio.h>
#include <stdlib.h>
int b(int n,int k)
{if(n<k)
return 0;
else if(n==0 && k==0)
return 1;
else if(k==0)
return 1;
else
return (b(n-1,k)+b(n-1,k-1)); }
int main() {
    int b,i,flag=0;
    scanf("%d",b;)
    for(n=0;n<=20;i++)
    {for(k=0;k<=20;k++)
    {if(b==b(n,k))
    {flag=1;
    break;}}
    if(flag==1)
    break;
}}
if(flag==1)
printf("%d %d",n,k);
else
printf("-1")
	return 0; }