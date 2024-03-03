#include<stdio.h>
int count=0,x=0;
int dif(int arr[],int n) {
    x=x-arr[n];
    if(n=1)return x;
    dif(arr,n-1);
    return x+arr[0]; }
int main() {
    int n,i;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d ",&arr[i]);
    int res=dif(arr,n)+arr[0];
    printf("%d",res);
    return 0; }