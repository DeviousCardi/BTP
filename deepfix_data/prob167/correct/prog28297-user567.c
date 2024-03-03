#include<stdio.h>
int sum=0;
int fun(int n,int sum) {
    int a;
    static int i=0;
    i++;
     scanf("%d",&a);
     sum=sum+a;
     if(i==n)
     return sum;
     else
     fun(n,sum); }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int s=fun(n,sum);
    printf("%d",s);
    return 0; }