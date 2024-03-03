#include <stdio.h>
int main() {
    int n,t1,t2,t3,s,a,i;
    t1=n%10;
    n=n/10;
    t2=n%10;
    n=n/10;
    t3=n%10;
    n=n/10;
    s=t1+t2+t3+n;
    if(a%s==0){
        n%s==0?n:n+1;
    for(i=2016;i<=n;i++) {
        if(i%s==0)
        printf("%d",i);
    }}
    return 0; }