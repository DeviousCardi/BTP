#include<stdio.h>
long long int prod(int a[],long long int size) {
    if(size==1)
    return a[0];
    return a[size-1]*prod(a,size-1); }
int main() {
    int arr[1000000000];
    long long int i,n;
    scanf("%lld",&n);
    for(i=0;i<n;i++) {
        scanf("%d",arr[i]); }
    printf("%lld",prod(arr,n))
    return 0; }