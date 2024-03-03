#include <stdio.h>
int main() {
    int n,r,sum=0;
    scanf("%d",&n);
    while(n>0) {
        r=n%10;
        sum=sum+r;
        n=(n/10); }
    int i;
    for(i=n+1;i%sum==0;i++) {
        printf("%d",i); }
    return 0; }