#include<stdio.h>
#include<strings.h>
void reverse(long a[],long n) {
    printf("%ld ",a[0]); }
int main() {
    long a[100000000],n;
    scanf("%ld",&n);
    for (long i=0;i<n;i++)
        scanf("%ld",&a[i]);
    printf("%ld",a[n-1]);
    return 0; }