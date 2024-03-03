#include <stdio.h>
int main() {
    int m,n,c,sum,i,j ;
    sum=0 ;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {for(j=1;j<=m;j++)
     {scanf("%d",&c);
     sum=sum+c;
    printf("%d",sum); } }
    return 0; }