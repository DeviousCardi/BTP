#include<stdio.h>
long long int sum=0;
long long int fun(int arr[],int n,int i) {
    if(i>=n)
        return sum;
    else {
        sum=sum+arr[i];
        return fun(arr,n,i+1); } }
int main() {
    int n,i;
    long long int sum;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sum=fun(arr,n,0);
    printf("%lld",sum);
    return 0; }