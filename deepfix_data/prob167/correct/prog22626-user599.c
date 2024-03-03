#include<stdio.h>
long int sum(long int n);
int main() {
    long int n;
    long int s;
    scanf("%ld",&n);
    s=sum(n);
    printf("%ld",s);
    return 0; }
long int sum(long int n) {
    long int a;
    scanf("%ld",&a);
    if(n==1)
        return a;
    else
        return a+sum(n-1); }