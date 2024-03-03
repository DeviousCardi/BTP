#include<stdio.h>
#include<strings.h>
int reverse(int arr[],int i,int n-1); {
    int i;
    swap(arr[i],arr[n-i-1]);
    reverse(arr,i+1,n-2) }
    swap(arr[i],arr[n-i-1]): {
        int t=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=t; }
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    reverse(arr,0,n-1);
    return 0; }