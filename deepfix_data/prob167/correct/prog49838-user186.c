#include<stdio.h>
long int sum(long int n) {
    long int a;
    scanf("%ld",&a);
    if(n==1)
    return a;
    else
    return a+sum(n-1); }
int main() {
    long int n,s;
    scanf("%ld",&n);
    s=sum(n);
    printf("%ld",s);
    return 0; }