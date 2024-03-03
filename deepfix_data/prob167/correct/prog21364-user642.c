#include<stdio.h>
int sum(long long int arr[],long long int n) {
    static long long int s=0;
    if(n==0) return s;
    else {
          s=s+arr[n-1];
        return sum(arr,n-1); } }
int main() {
    long long int i,n;
    scanf("%ld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
    printf("%ld",sum(a,n));
    return 0; }