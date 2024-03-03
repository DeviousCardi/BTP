#include<stdio.h>
int fun(int n,int sum) {
    int a;
    static int i=0;
    i++;
     scanf("%d",&a);
     sum=sum+a;
     printf("i=%d a=%d\n",i,a);
     if(i==n)
     return sum;
     else
     fun(n,sum); }
int main() {
    int n;
    scanf("%d",&n);
    int sum=0;
    int s=fun(n,sum);
    printf("%d",s);
    return 0; }