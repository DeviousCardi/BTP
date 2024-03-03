#include<stdio.h>
long long sum(long n) {
    if(n==0)
    return 0;
    else {
        long long a;
        scanf("%li",&a);
        return (a+sum(n-1)); } }
int main() {
    long n;
    scanf("%li",&n);
    printf("%lli",sum(n));
    return 0; }