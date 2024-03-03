#include<stdio.h>
int add(long arr[],long n){
    static long sum=0;
    if(n==0){
        return sum; }
    sum=sum-arr[0];
    add(arr+1,n-1); }
int main() {
    long i;
    long arr[100000],sum,N;
    scanf("%ld",&N);
    for(i=0;i<N;i++){
        scanf("%ld",&arr[i]); }
    sum=add(arr,N)+2*arr[0];
    printf("%ld",sum);
    return 0; }