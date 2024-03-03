#include <stdio.h>
int main() {
    int n,d,sum=0,i;
    scanf("%d",&n);
    while(n!=0) {
        d=n%10;
        sum=sum+d;
        n=n/10; }
    i=2016;
    while(i%sum!=0) {
        i++; }
    printf("%d",i);
    return 0; }