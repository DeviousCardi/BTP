#include <stdio.h>
int main() {
    int i,n,r,d;
    double s;
    scanf("%d",&n);
    while(n>10) {
        r=n%10;
        n=n/10;
        d=d+r; }
    for(i=n;i>=0;i++) {
        s=i/d;
        if(s==0)
        break; }
    printf("%d",i); }