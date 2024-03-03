#include<stdio.h>
int add(long arr[],int n,long temp){
    static long sum;
    sum=temp;
    if(n==0){
        return sum; }
    sum=sum-arr[0];
    add(arr+1,n-1,temp); }
int main() {
    int i,N;
    long arr[10],sum,temp;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%ld",&arr[i]); }
    temp=arr[0];
    sum=add(arr,N,temp);
    printf("%ld",sum);
    return 0; }