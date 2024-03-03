#include<stdio.h>
long sum(long n) {
    if(n==0)
    return 0;
    else {
        long a;
        scanf("%li",&a);
        return (a+sum(n-1)); } }
int main() {
    long n;
    scanf("%li",&n);
    printf("%li",sum(n));
    return 0; }