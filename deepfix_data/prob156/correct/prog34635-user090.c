#include <stdio.h>
int main() {
    int m,n,c,i,j;
    int count=0 ;
    scanf("%d%d",&n,&m);
     int sum[n] ;
     int add[m];
    for(i=1;i<=n;i++)
    {for(j=1;j<=m;j++) {
     scanf("%d",&c);
    add[j]=add[j]+c ;
    sum[i]=add[j];
     printf("%d\n",sum[i]); } }
    return 0; }