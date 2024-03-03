#include<stdio.h>
int sum=0;
long long int fun(long long int arr[],long long int n,long long int i) {
    if(i>=n)
        return sum;
    else {
        sum=sum+arr[i];
        return fun(arr,n,i+1); } }
int main() {
    long long int n,i,sum;
    scanf("%lld",&n);
    long long int arr[n];
    for(i=0;i<n;i++)
        scanf("%lld",&arr[i]);
    sum=fun(arr,n,0);
    printf("%lld",sum);
    return 0; }