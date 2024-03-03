#include<stdio.h>
unsigned long long int sum(int n);
int main() {
    int n;
    unsigned long long int s;
    scanf("%d",&n);
    s=sum(n);
    printf("%lld",s);
    return 0; }
unsigned long long int sum(int n) {
    unsigned long long int a;
    scanf("%ld",&a);
    if(n==1)
        return a;
    else
        return a+sum(n-1); }