#include <stdio.h>
int main(){
 int n;
 int sum=0;
 scanf("%d",&n);
 int b=n;
 for(int i=1000;i>0;i=i/10)
 {int a;
    a=n/i;
    n=n%i;
    sum =sum+a; }
 int d=2015%sum;
int e=2015-d+sum;
printf("%d",e);
    return 0; }