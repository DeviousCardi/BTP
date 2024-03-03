#include<stdio.h>
#include<strings.h>
void reverse(long a[][10000],long n) {
    printf("%ld ",a[(n-1)/10000][(n-1)%10000]);
    n--;
    reverse(a,n); }
int main() {
    long a[100000][1000],n;
    scanf("%ld",&n);
    for (long i=0;i<n;i++)
        scanf("%ld",&a[i]);
    return 0; }