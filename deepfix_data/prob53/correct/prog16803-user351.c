#include<stdio.h>
long int fun(long int arr[],long int n) {
    if(n==2)
    return arr[0]-arr[1];
    long int ans=fun(arr,n-1)-arr[n-1];
    return ans; }
int main() {
    long int n;
    scanf("%ld",&n);
    long int arr[100000];
    for(long int i=0;i<n;i++)
    scanf("%ld",&arr[i]);
    long int ans=fun(arr,n);
    printf("%ld",ans);
    return 0; }