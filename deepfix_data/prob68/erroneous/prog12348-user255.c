#include<stdio.h>
long int product(int a[],int N) {
    if ( N<0 )
        return 1;
    else
        return (a[--N]*product(a,N-1)); }
int main() {
    int N,i,prod;
    scanf("%d",&N);
    int a[N];
    for ( i=0 ; i<N ; i++ )
        scanf("%d",&a[i]);
    prod=product(a,N)
    printf("%ld",prod);
    return 0; }