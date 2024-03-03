#include<stdio.h>
#include<limits.h
int product(int a[],int n){
    if(n==1)
        return a[0];
    else
        return a[n-1]*product(a,n-1) }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",product(arr,n));
    return 0; }