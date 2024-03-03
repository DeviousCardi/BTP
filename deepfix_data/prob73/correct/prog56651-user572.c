#include<stdio.h>
int main() {
int v,p,n,m,gold,max,sum;
scanf("%d %d",&n,&m);
for(v=1;v<=n;v++)
{max= sum;
    for(p=1;p<=m;p++)
   { scanf("%d",&gold);
    sum=sum+gold;} }
if(max>sum)
{printf("%d",max);}
return 0; }