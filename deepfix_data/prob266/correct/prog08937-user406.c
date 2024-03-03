#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a,b,c,d;
    a=n/1000;
    d=n%10;
    int e;
    e=n%100;
    c=e/10;
    int f;
    f=n%1000;
    b=f/100;
    int sumdigits=a+b+c+d;
    int i;
    int x,y;
    for(i=2016;i>=2016;i++) {
        x=i%sumdigits;
        if(x==0) {
            y=i;
            break; } }
    printf("%d",y);
    return 0; }