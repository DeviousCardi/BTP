#include <stdio.h>
int main(){
    int n,sum=0,d,k,m;
    scanf("%d",&n);
      m=n;
    while(n>0) {
        d=n%10;
        sum=sum+d;
        n=n/10; }
     k=sum+m;
     printf("%d",k);
    return 0; }