#include <stdio.h>
int main() {
    int n,i,c=0,a,dig=0,s=0;
    scanf("%d",&n);
    a=n;
    while(a!=0) {
        dig=a%10;
        s+=dig;
        a/=10; }
    for(i=n;i<=n+100;i++) {
        if(n%s==0) {
            c=n;
            break; } }
    printf("%d",c);
    return 0; }