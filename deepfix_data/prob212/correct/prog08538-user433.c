#include <stdio.h>
int main() {
    int i,n,r,d=0,m;
    scanf("%d",&n);
    m=n;
    while(n>0) {
        r=n%10;
        n=n/10;
        d=d+r; }
    for(i=2016;;i++) {
        if(i%d==0)
        break; }
    printf("%d",i); }