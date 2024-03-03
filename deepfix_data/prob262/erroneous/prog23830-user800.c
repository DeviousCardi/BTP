#include<stdio.h>
#include<strings.h>
void printrev(int a[],long n) {
    print("%d ",a[n])
    if(n==0)
        return ;
    printrev(a,n-1); }
int main() {
    long N;
    long i;
    scanf("%ld",&N);
    int A[N];
    for(i=0;i<N;i++)
        scanf("%d",&A[i]);
    printrev(A,N-1);
    return 0; }