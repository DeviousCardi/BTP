#include <stdio.h>
int main() {
    int n,d,sum=0,i=2016;
    scanf("%d",&n);
    while(n!=0) {
        d=n%10;
        sum=sum+d;
        n=n/10; }
    for(i=2016;i<10000;i++) {
        if(i%sum==0)
        break; }
    printf("%d",i);
    return 0; }