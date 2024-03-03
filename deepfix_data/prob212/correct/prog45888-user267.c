#include <stdio.h>
int main(){
 int n;
 scanf("%d",&n);
 int z=2016;
 int sum=0;
 int a=0;
 while(n!=0){
     a=n%10;
     sum=sum+a;
     n=n/10; }
 while(z%sum!=0) {
     z=z+1; }
 printf("%d",z);
    return 0; }