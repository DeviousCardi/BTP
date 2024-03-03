#include<stdio.h>
long int product(int a[],int n);
int main() {
    int N,i;
    long int p;
    scanf("%d\n",&N);
    int a[N];
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    p=product (a,N);
    printf("%ld",&p);
    return 0; }
long int product (int a[],int n) {
    if (n==0)
    return a[0];
    return (a[n-1]*product(a,n-1)); }