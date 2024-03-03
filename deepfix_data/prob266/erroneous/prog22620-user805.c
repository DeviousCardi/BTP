#include <stdio.h>
int main(){
 int a,n,i,sum,temp,t;
 sum=0;
 scanf("%d",&n);
 temp=n;
 for(i=1;i<=5;i++) {
  a=temp%10;
  temp=temp/10;
  sum=sum+a; }
 t=(2016/sum)*sum;
 if(t=2016)
printf("%d",t+sum);
else
printf(return 0); }