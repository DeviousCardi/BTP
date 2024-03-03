#include <stdio.h>
int main(){
 int n;
 scanf("%d",&n);
 int sum=0;
 int i=0;
 int a;
 while(i<10) {
    a=n%10;
     sum=sum+a;
     i=n/10;
     n=i; }
 printf("%d",sum);
    return 0; }