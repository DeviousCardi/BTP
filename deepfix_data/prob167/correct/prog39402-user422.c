#include<stdio.h>
int n,s=0;
int sum(long int arr[],long int n){
    if(n==1)
    return arr[0];
    else
    return arr[n-1]+ sum(arr,n-1); }
int main() {
    long int n,i,x;
    scanf("%ld",&n);
    long int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    x= sum(arr,n);
    printf("%ld",x);
    return 0; }