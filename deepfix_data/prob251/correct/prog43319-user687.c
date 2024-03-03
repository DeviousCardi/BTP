#include<stdio.h>
int main() {
    int n,a,b,c;
    a=b=c=0;
    scanf("%d",&n);
    a=n/5;
    while(a>=0) {
        b=(n-5*a)/3;
        while(b>=0) {
            c++;
            b--; }
        a--; }
    printf("%d",c);
    return 0; }