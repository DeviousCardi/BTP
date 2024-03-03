#include<stdio.h>
int arr_prod( int a[], int N ) {
    static int prod=1;
    if (N <= 0)
        return prod;
     else
        prod = prod*a[N-1];
    arr_prod(a,N-1); }
int main() {
    int N,i,prod;
    scanf("%d",&N);
    int a[N];
    for ( i=0 ; i<N ; i++ )
        scanf("%d",&a[i]);
    prod=arr_prod(a,N);
    printf("%d",prod);
    return 0; }