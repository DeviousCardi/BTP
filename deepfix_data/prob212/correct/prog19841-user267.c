#include <stdio.h>
int main(){
 int n;
 scanf("%d",&n);
 int z;
 int i;
 z=n;
 int sum=0;
 int a=0;
 while(n!=0){
     a=n%10;
     sum=sum+a;
     n=n/10; }
 for(i=z;(i%sum==0);i++) {
     if((i%sum==0)){
         break; } }
 printf("%d",i);
    return 0; }