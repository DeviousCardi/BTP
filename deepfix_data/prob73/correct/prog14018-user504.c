#include <stdio.h>
int main() {
int n,m;
scanf("%d %d",&n,&m);
int a,i,x,sum,maxsum;
sum=0;
maxsum=0;
i=1;a=1;
while(i<=n) {
while(a<=m) {
  scanf("%d",&x);
  sum=sum +x;
  if(maxsum<sum)
maxsum=sum;
  a++; }
 i++; }
printf("%d",maxsum);
    return 0; }