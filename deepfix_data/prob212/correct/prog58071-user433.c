#include <stdio.h>
int main() {
    int i,n,r,d=0,m,s;
    scanf("%d",&n);
    m=n;
    while(n>10) {
        r=n%10;
        n=n/10;
        d=d+r; }
    d=d+n;
    for(i=m;i>=0;i++) {
        if(i/d==0)
        break; }
    printf("%d",i); }