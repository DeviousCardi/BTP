#include<stdio.h>
int sum=0;
int add(int arr[],int k,int n) {
    if(k==n-1)
return sum+a[k];
else
sum=sum+add(arr,++k,n); }
int main() {
    int n,i;
    scanf("%d",&n);
    arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("%d",add(arr,0,n));
    return 0; }