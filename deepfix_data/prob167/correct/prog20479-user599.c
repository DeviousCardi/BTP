#include<stdio.h>
long long int sum(int n);
int main() {
    int n;
    long long int s;
    scanf("%d",&n);
    s=sum(n);
    printf("%ld",s);
    return 0; }
long long int sum(int n) {
    long int a;
    scanf("%ld",&a);
    if(n==1)
        return a;
    else
        return a+sum(n-1); }