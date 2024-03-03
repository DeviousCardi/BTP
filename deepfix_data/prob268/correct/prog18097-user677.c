#include <stdio.h>
#include <stdlib.h>
int main() {
    long n,sum=0,i;
    scanf("%ld",&n);
    for(i=n/5;i>=1;i--) {
        sum=sum+((n-(5*i))/3)+1; }
    sum=sum+(n/3)+1;
    printf("%ld",sum);
    return 0; }