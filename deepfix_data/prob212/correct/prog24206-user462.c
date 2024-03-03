#include <stdio.h>
int main(){
     int n,y,sum,i,d;
     scanf("%d",&n);
     sum=0;
     for (i=n;i!=0;i=i/10){
         d=i%10;
         sum=sum+d; }
      for (y=2016;;y=y+1){
          if (y%sum==0){
              printf("%d",y);
              break; } }
    return 0; }