#include <stdio.h>
int main()
{int n,m,v,p,gold,sum,max=0;
scanf("%d %d\n",&n,&m);
for(v=1;v<=n;v++) {
    sum=0;
    for(p=1;p<=m;p++) {
       scanf("%d",&gold);
        sum= sum+gold; }
    if(sum>max)
    max=sum; }
   printf("%d",max);
    return 0; }