#include<stdio.h>
#include<strings.h>
void reverse(long a[][10000],long n) {
    printf("%ld ",a[n-1]);
    n--;
    reverse(a,n); }
int main() {
    long n;
    scanf("%ld",&n);
    long a[n];
    for (long i=0;i<n;i++)
        scanf("%ld",&a[i]);
    return 0; }