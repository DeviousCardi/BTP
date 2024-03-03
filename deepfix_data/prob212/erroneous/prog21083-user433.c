#include <stdio.h>
int main() {
    inti, n,r,d,m;
    double s;
    scanf("%d",&n);
    m=n;
    while(n>10) {
        r=n%10;
        n=n/10;
        d=d+r; }
    for(i=m;i>=0;i++) {
        s=(double)i/d;
        if(s==0.0)
        break; }
    printf("%d",i); }