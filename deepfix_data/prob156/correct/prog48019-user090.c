#include <stdio.h>
int main() {
    int m,n,c,i,j;
    int sum=0 ;
    int count=0 ;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {for(j=1;j<=m;j++) {
     scanf("%d",&c); }
    sum=sum+c ;
    count=count+1;
    printf("%d %d\n",sum,count); }
    return 0; }