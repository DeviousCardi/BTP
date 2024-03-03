#include<stdio.h>
int sum=0;
int fun(int n) {
    int a;
    static int i=0;
    i++;
     scanf("%d",&a);
     sum=sum+a;
     printf("i=%d a=%d sum=%d n=%d\n",i,a,sum,n);
     if(i==n)
     return sum;
     else
     fun(n); }
int main() {
    int n;
    scanf("%d",&n);
    int s=fun(n);
    printf("s=%d",s);
    return 0; }