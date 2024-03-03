#include<stdio.h>
int i=0;
int n;
int main() {
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
    int pro(int a[],int z);
    int prod=pro(ar,n);
    printf("%d",prod);
    return 0; }
int pro(int arr[],int i){
    if(i+1==n)
    return arr[i];
    else
    return (arr[i]*pro(arr,i++)); }