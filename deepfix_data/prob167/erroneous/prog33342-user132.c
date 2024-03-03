#include<stdio.h>
int add(int arr[],int n) {
    if(n<=1) {
        return arr[0]; }
    else
    return arr[n-1]+add(arr,n-1); }
int main() {
    int n
    long int sum;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i=i+1)
    scanf("%d",&arr[i]);
    sum=add(arr,n);
    printf("%d",sum);
    return 0; }