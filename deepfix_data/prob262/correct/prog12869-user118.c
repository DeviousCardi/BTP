#include<stdio.h>
#include<strings.h>
long int reverse(long int N,long int a[N]) {
    if(N<=0)
    return 0;
    printf("%ld",a[N-1]);
    return reverse(N-1,a[N-1]); }
int main() {
    long int k;
    long int N,a[1000000000],i;
    scanf("%ld",&N);
    for(i=0;i<=N-1;i++)
    scanf("%ld",&a[i]);
    k=reverse(N,a[N]);
    return 0; }