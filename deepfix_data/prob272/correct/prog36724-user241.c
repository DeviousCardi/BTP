#include <stdio.h>
int main(){
     int a1,a2,n,i,sum;
     scanf("%d %d %d",&a1,&a2,&n);
   if(n==1)
   printf("%d",a1);
   if(n==2)
   printf("%d",a2);
   for(i=3;i<=n;i++) {
   sum=a1+a2-2;
   a1=a2;
   a2=sum; }
   printf("%d",sum);
    return 0; }