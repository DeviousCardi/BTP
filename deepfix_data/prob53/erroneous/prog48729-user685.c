#include<stdio.h>
int add(long arr[],int n){
    static long sum=0;
    if(n==0){
        return sum; }
    sum=sum-arr[0];
    add(arr+1,n-1) }
int main() {
    int i,N;
    long arr[10],sum;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%ld",&arr[i]); }
    sum=add(arr,N);
    printf("%ld",sum);
    return 0; }