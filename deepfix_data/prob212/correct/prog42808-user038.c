#include <stdio.h>
int main() {
    int n,r,sum=0;
    scanf("%d",&n);
    while(n>0) {
        r=n%10;
        sum=sum+r;
        n=(n/10); }
    int i;
    for(i=n+1;;i++) {
        if(i%sum==0) {
            printf("%d",i); } }
    return 0; }