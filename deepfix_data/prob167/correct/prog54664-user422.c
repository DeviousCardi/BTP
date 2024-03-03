#include<stdio.h>
int n,s=0;
int sum(int arr[],int n){
    if(n==0)
    return arr[0];
    else
    return arr[n-1]+ sum(arr,n-1); }
int main() {
    int n,i,x;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    x= sum(arr,n);
    printf("%d",x);
    return 0; }