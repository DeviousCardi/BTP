#include<stdio.h>
int add(long long arr[],int n,int k,int temp){
    static long long sum=0;
    if(n==k){
        sum=temp; }
    if(n==0){
        return sum; }
    sum=sum-arr[0];
    add(arr+1,n-1,k,temp); }
int main() {
    int i,N;
    long long arr[100000],sum;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%lld",&arr[i]); }
    sum=add(arr+1,N-1,N-1,arr[0])+2*arr[0];
    printf("%lld",sum);
    return 0; }