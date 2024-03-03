#include <stdio.h>
int main() {
int n,m,i,j,sum,max=0,x;
scanf("%d%d",&n,&m);
for(i=1;i<=n;i++)
{sum=0;
for(j=1;j<=m;j++)
 {if(j==m)
 scanf("%d\n",&x);
 else
 scanf("%d",&x);
 sum=sum+x; }
if(sum>=max)
max=sum; }
printf("%d",max);
    return 0; }