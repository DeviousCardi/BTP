#include <stdio.h>
#include<math.h>
int main(){
 int n,i,k,b,sum=0;
 scanf("%d",&n);
 b=n;
 for(i=0;i<4;i++) {
     k=(n%10);
     sum=sum+k;
     n=(n-k)/10; }
 n=b;
 k=sum;
 printf("%d\n",k);
    return 0; }