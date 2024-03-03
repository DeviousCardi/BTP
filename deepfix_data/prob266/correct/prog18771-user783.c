#include <stdio.h>
int main() {
 int n,sum=0,ly,i;
 scanf("%d",&n);
 while(n>0) {
  sum=sum+(n%10);
  n=n/10; }
 int p=sum;
 i=2016/p;
 n=(i+1)*p;
 printf("%d %d %d",n);
    return 0; }