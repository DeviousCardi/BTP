#include <stdio.h>
int main(){
 int n,y,sum,a;
 scanf("%d",&n);
 int x[4];
 x[4]=n;
 sum =0;
 sum=x[0]+x[1]+x[2]+x[3];
 if(y%sum==0){
     printf("%d",y); }
 else{
 printf("%d",a%sum); }
    return 0; }