#include <stdio.h>
int main(){
 int a,n,i,sum,temp;
 sum=0;
 scanf("%d",&n);
 for(i=1;i<=4;i++) {
  a=temp%10;
  temp=temp/10;
  sum=sum+a; }
 printf("%d",(n/sum)*sum+sum);
    return 0; }