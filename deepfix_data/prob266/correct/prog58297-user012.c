#include <stdio.h>
int main() {
 int n,l,t=0,p=2016,m;
     for(int i=0;i<n;i++)
 scanf("%d",&n);
while(n!=0) {
        m=n%10;
        t=t+m;
        n=n/10; }
while((p%t)!=0) {
     p=p+1; }
  if((p%t)==0)
  printf("%d",p);
    return 0; }