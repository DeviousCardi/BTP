#include<stdio.h>
#include<strings.h>
void reverse(long a[],long n) {
    printf("%ld ",a[0]); }
int main() {
    long a[100],n;
    scanf("%ld",&n);
    for (long i=0;i<n;i++)
        scanf("%ld",&a[i]);
    printf("%ld",a[0]);
    return 0; }