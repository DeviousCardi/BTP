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
 int n;
 scanf("%d",&n);
 y=y(n);
 i=2016;
 while(i%y(n)==0){
     break;
     i=i+1;
 }printf("%d",i);
    return 0; }