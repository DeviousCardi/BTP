#include <stdio.h>
int main() {
int i,j,n,m,s,sum,b=0;
scanf("%d%d",&n,&m);
for(i=1;i<=n;i++) {
for(j=1;j<=m;j++) {
scanf("%d",&s);
sum=sum+s; }
if(sum>b)
b=sum; }
printf("%d",b);
return 0; }