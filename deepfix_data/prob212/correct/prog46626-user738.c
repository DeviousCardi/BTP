#include <stdio.h>
int main(){
 int n,y,i,rem,sum=0,p;
 scanf("%d",&n);
 while(n!=0) {
     rem=n%10;
     sum=sum+rem;
     n/=10; }
  if(n%sum==0)
  printf("%d",n);
  else {
      p=n/sum;
      printf("%d",(p+1)*sum); }
    return 0; }