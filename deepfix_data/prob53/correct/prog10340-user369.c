#include<stdio.h>
int d=0;
void input(long long int A[],int N) {
    if(N!=0)
    scanf("%lld",&A[N-1]);
    if(N==0)
    return ;
    input(A,N-1); }
void diff(long long int a[],int n) {
    if(n!=0)
    d=d-a[n-1];
    if(n==0)
    return ;
    diff(a,n-1); }
int main() {
    int n;
    scanf("%d",&n);
    long long int a[n];
    input(a,n);
    a[n-1]=-a[n-1];
    diff(a,n);
    printf("%d",d);
    return 0; }