#include <stdio.h>
int main() {
 int n,sum=0,ly,i;
 scanf("%d",&n);
 while(n>0) {
  sum=sum+(n%10);
  n=n/10; }
 int p=sum;
 i=2016/p;
 if((2016%i)!=0)
 n=(i+1)*p;
 else
 n=2016;
 printf("%d ",n);
    return 0; }