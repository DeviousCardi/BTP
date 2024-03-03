#include<stdio.h>
int d=0;
void input(int A[],int N) {
    if(N!=0)
    scanf("%d",&A[N-1]);
    if(N==0)
    return ;
    input(A,N-1); }
int diff(int a[],int n) {
    if(n==0)
    return 0;
    if(n!=0)
    d=a[n-1]-diff(a,n-1); }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    input(a,n);
    a[n-1]=-a[n-1];
    diff(a,n);
    printf("%d",d);
    return 0; }