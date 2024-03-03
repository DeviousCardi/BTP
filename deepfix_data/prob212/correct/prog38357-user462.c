#include <stdio.h>
int main(){
 int n,y,sum,i,a;
 scanf("%d",&n);
 int x[4];
 x[4]=n;
 sum =0;
 for (i=0;i<4;i=i+1){
     x[i]=x[i]+x[i];
     sum=x[i]; }
 if(y%sum==0){
     printf("%d",y); }
 else{
 printf("%d",a%sum); }
    return 0; }