#include <stdio.h>
int main() {
int n,m;
scanf("%d %d",&n,&m);
int a,i,x,sum,maxsum;
sum=0;
maxsum=0;
i=1;
while(i<=n)
  {a=1;
while(a<=m) {
  scanf("%d",&x);
  sum=sum +x;
  a++; }
if(maxsum<sum)
maxsum=sum;
printf("%d",maxsum);
  i++; }
    return 0; }