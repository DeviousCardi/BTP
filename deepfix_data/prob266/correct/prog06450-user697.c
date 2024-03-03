#include <stdio.h>
#include<math.h>
int main(){
 int n,i=2016,k,sum=0;
 scanf("%d",&n);
 for(i=0;i<4;i++) {
     k=(n%10);
     sum=sum+k;
     n=(n-k)/10; }
 k=sum;
 printf("%d",k);
 while(i<2100) {
     if(n%k==0) {
         break; }
     else
     i=i+1; }
    return 0; }