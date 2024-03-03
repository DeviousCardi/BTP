#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,a,sum=0;
    a=n;
    for(i=0;i<4;i++) {
           int j;
           j=(a%10);
           a=(a/10);
           sum=sum+j; }
    for(i=n+1;i<36;i++)
         {int k;
           k=(i%sum);
           if(k==0) {printf("%d",i);break;} }
 return 0;}