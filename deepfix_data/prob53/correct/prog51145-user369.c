#include<stdio.h>
void input(int A[],int N) {
    if(N!=0)
    scanf("%d",&A[N-1]);
    if(N==0)
    return ;
    input(A,N-1); }
int diff(int a[],int n) {
    int d=0;
    if(n!=0)
    d=d-a[n-1];
    if(n==0)
    return d;
    diff(a,n-1); }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    input(a,n);
    a[n-1]=-a[n-1];
    for(int i=n-1;i>=0;i--)
    printf("%d",i);
    return 0; }