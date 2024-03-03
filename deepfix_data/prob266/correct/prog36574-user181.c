#include <stdio.h>
int main(){
 int n;
 int sum=0;
 scanf("%d",&n);
 for(int i=1000;i>0;i=1/10)
 {int a;
    a=n/i;
    n=n%i;
    sum =sum+a; }
 printf("%d",n);
    return 0; }