#include <stdio.h>
int main() {
 int n,sum=0,ly,i;
 scanf("%d",&n);
 int m=n;
 while(n>0) {
  sum=sum+(n%10);
  n=n/10; }
 int p=sum;
 for(i=1;i<n;i++) {
     ly=p*i;
     printf("%d",ly);
     if(ly>=m)
     break; }
 printf("%d",ly);
    return 0; }