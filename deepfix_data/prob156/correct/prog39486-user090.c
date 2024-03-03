#include <stdio.h>
int main() {
    int m,n,c,e,sum,i,j,add ;
    sum=0 ;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {for(j=1;j<=m;j++)
     {scanf("%d",&c);
     scanf("%d",&e);
     sum=sum+c;
     add=add+e ;}
     if(sum>=add)
     {printf("%d",sum);}
     else
     {printf("%d",add);} }
    return 0; }