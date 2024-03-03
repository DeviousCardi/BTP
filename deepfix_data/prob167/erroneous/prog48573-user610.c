#include<stdio.h>
int fun(int arr[],int n,int i) {
    if(i==n)
        return sum;
    else {
        int sum=0;
        sum=sum+arr[i];
        return fun(arr,n,++i); } }
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sum=fun(arr,n,0);
    printf("%d",sum);
    return 0; }