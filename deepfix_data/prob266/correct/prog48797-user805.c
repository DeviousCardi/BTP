#include <stdio.h>
int main(){
 int a,n,i,sum,temp;
 sum=0;
 scanf("%d",&n);
 temp=n;
 for(i=1;i<=5;i++) {
  a=temp%10;
  temp=temp/10;
  sum=sum+a; }
 if((n/sum)*sum+sum>=2016)
 printf("%d",(n/sum)*sum+sum);
 else
 printf("%d",(n/sum)*sum+2*sum);
    return 0; }