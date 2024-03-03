#include<stdio.h>
int count=0;
int dif(int arr[],int n) {
    int x=arr[0]-arr[n];
    if(count==n)return x;
    count=count+1;
    dif(arr,n-1);
    return x+arr[0]; }
int main() {
    int n,i;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d ",&arr[i]);
    printf("%d",dif(arr,n));
    return 0; }