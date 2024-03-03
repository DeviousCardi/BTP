#include <stdio.h>
int main(){
         int a,sum=0,n,i,j;
         scanf("%d",&n);
         for(i=1;i<4;i++){
             a=n%10;
             n=n/10;
             sum=sum+a; }
         sum=sum+n;
          printf("%d",sum);
          return 0; }