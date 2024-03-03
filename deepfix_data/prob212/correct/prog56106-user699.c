#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a,b,c,d,e;
    a=n%10;
    b=n%100;b=(b-a)/10;
    c=n%1000;c=(c-(b*10)-a)/100;
    d=n-(c*100)-(b*10)-a;
    e=a+b+c+d;
    printf("%d",e);
    return 0; }