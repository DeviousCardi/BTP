#include <stdio.h>
int main(){
     int n,y,sum,i,d;
     scanf("%d",&n);
     for (i=n;i!=0;i=i/10){
         d=i%10;
         sum=sum+d; }
      if(y%sum==0){
         printf("%d",y); }
      else{
      printf("%d",y++||--y); }
    return 0; }