#include <stdio.h>
 int y(int n){
     int i,x,sum=0;
     i=1;
     while(n!=0){
         x=n%10;
         sum=sum+x;
         n=n/10;
         i=i+1; }
     return sum; }
int main(){
 int n,z,i;
 scanf("%d",&n);
 z=y(n);
 i=2016;
 for( ;i%z==0;i=i+1){
if(i%z==0){
    break; } }
         printf("%d",i);
    return 0; }