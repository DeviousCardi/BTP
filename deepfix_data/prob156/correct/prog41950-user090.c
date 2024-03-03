#include <stdio.h>
int main() {
    int m,n,c,d,sum,i,j ;
    sum=0 ;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {for(j=1;j<=m;j++)
     {scanf("%d",&c);
     scanf("%f",&d);
     sum=sum+d;} }
    return 0; }