#include <stdio.h>
int main() {
    int n,i;
    int sum=0;
    scanf("%d",&n);
    while(n) {
        sum=sum+n%10;
        n=n/10; }
        for(i=2016;i%sum != 0;i++) { }
        printf("%d",i);
    return 0; }