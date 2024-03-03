#include <stdio.h>
int main()
{int n,m,v,p,gold,sum,max=0;
scanf("%d %d\n",&n,&m);
for(v=1;v<=n;v++)\\initialise entery to doors {
    sum=0;
    for(p=1;p<=m;p++)\\entering heaps one by one {
       scanf("%d",&gold);\\enter no of golds\\
        sum= sum+gold;\\total no of golds }
    if(sum>max)
    max=sum; }
   printf("%d",max);
    return 0; }