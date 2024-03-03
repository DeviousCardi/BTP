#include <stdio.h>
#include<math.h>
int main(){
 int n,i,k,b,sum=0;
 scanf("%d",&n);
 b=n;
 for(i=0;i<4;i++) {
     k=(b%10);
     sum=sum+k;
     b=(b-k)/10; }
 k=sum;
 printf("%d\n",k);
    return 0; }