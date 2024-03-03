#include <stdio.h>
#include<math.h>
int main(){
 int n,i,a=1,k,sum=0;
 scanf("%d",&n);
 for(i=0;i<4;i++) {
     k=(n%a);
     sum=sum+k;
     n=(n-k)/10; }
 k=sum;
 for(i=2016;i<2100;i++) {
     if(n%k==0) {
         printf("%d",i);
         break; } }
    return 0; }