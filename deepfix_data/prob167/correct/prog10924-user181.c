#include<stdio.h>
int sum(long int arr[],int,int);
int main() {
    int n;
    scanf("%d",&n);
    long int a[n];
    for(int i=0;i<n;i++)
    scanf("%ld",&a[i]);
    long int d=sum(a,0,n-1);
    printf("%ld",d);
    return 0;}
    int sum(long int arr[],int k,int n) {
        long int s=0;
        if(k==n)
        return s;
        s=arr[k]+sum(arr,k+1,n);
        return s; }