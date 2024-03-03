#include<stdio.h>
int add(long arr[],long n){
    long sum=0;
    if(n==0){
        return sum; }
    sum=sum-arr[0];
    add(arr+1,n-1); }
int main() {
    int i;
    long N,arr[1000000],sum;
    scanf("%ld",&N);
    for(i=0;i<N;i++){
        scanf("%ld",&arr[i]); }
    sum=add(arr,N);
    printf("%ld",sum);
    return 0; }