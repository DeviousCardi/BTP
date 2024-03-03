#include<stdio.h>
int product(int arr[],int n) {
    if(n==2) {
        return arr[0]*arr[1]; }
    else
        return arr[n-1]*product(arr,n-1); }
int main() {
    long int n,i;
    scanf("%ld",&n);
    int arr[n];
    for(i = 0; i < n ; i++)
        scanf("%d",&arr[i]);
    printf("%ld",product(arr,n));
    return 0; }