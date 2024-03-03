#include<stdio.h>
int d=0;
void input(int A[],int N) {
    if(N!=0)
    scanf("%d",&A[N-1]);
    if(N==0)
    return ;
    input(A,N-1); }
void diff(int a[],int n) {
    if(n!=0)
    {d=d-a[n-1];
    printf("%d",d);}
    if(n==0)
    return ;
    diff(a,n-1); }
int main() {
    int n,df=0,c;
    scanf("%d",&n);
    int a[n];
    input(a,n);
    a[n-1]=-a[n-1];
    diff(a,n);
    printf("\n%d",d);
    return 0; }