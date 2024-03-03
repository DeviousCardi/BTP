#include <stdio.h>
int main() {
 int n,sum=0,ly,i;
 scanf("%d",&n);
 int m=n;
 while(n>0) {
  sum=sum+(n%10);
  n=n/10; }
 int p=sum;
 i=n/p;
 printf("%d %d",p,i);
    return 0; }