#include <stdio.h>
int main()
{int n,m,v,p,gold,sum,max;
scanf("%d %d\n",&n,&m);
max=sum;
for(v=1;v<=n;v++) {
    for(p=1;p<=m;p++)
   { scanf("%d",&gold);
   sum= sum+gold;
}printf("%d",max); }
    return 0; }