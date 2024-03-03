#include<stdio.h>
int main() {
    int n,a,b,c,d,p,i;
    scanf("%d",&n);
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=(n/1000)%10;
    p=a+b+c+d;
    for(i=2016;i<=3000;i++) {
       while(i%p==0);
       break; }
       printf("%d",i); }