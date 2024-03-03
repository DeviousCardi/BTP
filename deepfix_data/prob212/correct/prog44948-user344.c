#include <stdio.h>
int main(){
    int n, a, b, c, d, l, i, m;
    a=n/1000;
    n=n%1000;
    b=n/100;
    n=n%100;
    c=n/10;
    n=n%10;
    d=n;
    m=a+b+c+d;
    l=2016;
    while(l%m!=0){
        l=l+1; }
    printf("%d", l);
    return 0; }