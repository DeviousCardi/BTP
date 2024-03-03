#include <stdio.h>
#include<math.h>
int main(){
 int n,i,k,sum=0;
 scanf("%d",&n);
 for(i=0;i<4;i++) {
     k=(n%10);
     sum=sum+k;
     n=(n-k)/10; }
 k=sum;
 printf("%d\n",k);
 for(i=2016;i<2100;i++) {
     if(n%k==0) {
         printf("%d",i); } }
    return 0; }