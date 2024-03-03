#include <stdio.h>
int main(){
    int n,sum=0,d,i;
    scanf("%d",&n);
    while(n>0) {
        d=n%10;
        sum=sum+d;
        n=n/10; }
     for(i=2016;i>0;i++) {
         if(i%sum==0)
         break; }
     printf("%d",i);
    return 0; }