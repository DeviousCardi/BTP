#include <stdio.h>
int main() {
    int n,m,sum,i,j,x;
    sum=0;
    scanf("%d %d",&n,&m);
   for(i=1;i<=n;i=i+1){
   for(j=1;j<=m;j=j+1){
   scanf("%d",&x);
   sum=sum+x;}printf("%d",sum);}
    return 0; }