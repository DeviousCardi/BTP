#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a,b,c,d,x;
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=(n/1000);
    x=a+b+c+d;
    int i;
    for(i=2016;i>=2016;i++) {
        if(i%x==0) {
            break; } }
    printf("%d",i);
    return 0; }