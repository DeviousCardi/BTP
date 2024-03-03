#include<stdio.h>
long sum(long[],long,long);
int main() {
    long N;
    scanf("%ld",&N);
    long arr[N];
    for(long i=0;i<N;i++)
    scanf("%ld",&arr[i]);
    printf("%ld",sum(arr,0,N));
    return 0; }
long sum(long a[],long i,long N) {
    if(i>=N)
    return (0);
    return(a[i]+sum(a,i+1,N)); }