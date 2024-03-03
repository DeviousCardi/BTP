#include<stdio.h>
int product(int a[],int N) {
    int r=N;
    if ( r<0 )
        return 1;
    else
        return (a[r-1]*product(a,N)); }
int main() {
    int N,i;
    scanf("%d",&N);
    int a[N];
    for ( i=0 ; i<N ; i++ )
        scanf("%d",&a[i]);
    printf("%d",product(a,N));
    return 0; }