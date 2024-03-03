#include<stdio.h>
long int sum(long int arr[],long int,long int);
int main() {
    long int n;
    scanf("%ld",&n);
    long int a[n];
    for(long int i=0;i<n;i++)
    scanf("%ld",&a[i]);
    long int d=sum(a,0,n);
    printf("%ld",d);
    return 0;}
    long int sum(long int arr[],long int k,long int n) {
        long int s=0;
        if(k==n)
        return s;
        s=arr[k]+sum(arr,k+1,n);
        return s; }