#include <stdio.h>
int main(){
     int n,y,sum,i,a;
     a=y++||--y;
     scanf("%d",&n);
     int x[4];
     sum =0;
     for (i=0;i<4;i=i+1){
         n=x[i];
         sum=sum+x[i]; }
     if(y%sum==0){
         printf("%d",y); }
     else{
     printf("%d",a%sum==0); }
    return 0; }