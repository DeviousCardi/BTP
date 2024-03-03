#include <stdio.h>
int main() {
    int n,t1,t2,t3,s,a,i;
    scanf("%d",&n);
    t1=n%10;
    n=n/10;
    t2=n%10;
    n=n/10;
    t3=n%10;
    n=n/10;
    s=t1+t2+t3+n;
    if(a%s==0){
    for(i=2016;i<=a;i++) {
        printf("%d",a);
    }}
    return 0; }