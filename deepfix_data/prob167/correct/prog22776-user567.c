#include<stdio.h>
int fun(int n) {
    int a;
    static int i=0,sum=0;
    i++;
     scanf("%d",&a);
     sum=sum+a;
     if(i==n)
     {return sum;printf("%d",sum);}
     else
     fun(n); }
int main() {
    int n;
    scanf("%d",&n);
    int s=fun(n);
    printf("s=%d",s);
    return 0; }