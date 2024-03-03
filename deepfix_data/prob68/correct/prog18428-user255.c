#include<stdio.h>
int arr_prod( int a[], int N,int prod ) {
    if (N <= 0)
        return prod;
     else
        prod *= a[N-1];
    arr_prod(a,N-1,prod); }
int main() {
    int N,i,prod=1,product;
    scanf("%d",&N);
    int a[N];
    for ( i=0 ; i<N ; i++ )
        scanf("%d",&a[i]);
    product=arr_prod(a,N,prod);
    printf("%d",product);
    return 0; }