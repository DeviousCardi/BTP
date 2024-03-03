#include <stdio.h>
int main() {
    int m,n,c,i,j;
    scanf("%d%d",&n,&m);
     int sum[n] ;
     int add[m];
    for(i=1;i<=n;i++)
    {for(j=1;j<=m;j++)
    sum[i-1]=0; {
     scanf("%d",&c);
    add[0]=0 ;
    add[j]=add[j-1]+c ;}
    sum[i]=add[j] ;
     printf("%d\n",sum[i]); }
    return 0; }