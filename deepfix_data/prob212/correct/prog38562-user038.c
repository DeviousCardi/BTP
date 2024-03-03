#include <stdio.h>
int main() {
    int n,r,sum=0;
    scanf("%d",&n);
    int i=n;
    while(n>0) {
        r=n%10;
        sum=sum+r;
        n=(n/10); }
    for(;;i++) {
        if(i%sum==0) {
            printf("%d",i);
            break; } }
    return 0; }