#include<stdio.h>
void input(int A[],int N) {
    if(N!=0)
    scanf("%d",&A[N-1]);
    if(N==0)
    return ;
    input(A,N-1); }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    input(a,n);
    printf("%d",a[0]);
    return 0; }