#include<stdio.h>
long int fun(int n) {
    int a;
    static int i=0,sum=0;
    i++;
     scanf("%d",&a);
     sum=sum+a;
     if(i==n)
     {printf("%ld",sum);return 0;}
     else
     fun(n); }
int main() {
    int n;
    scanf("%d",&n);
    int s=fun(n);
    return 0; }