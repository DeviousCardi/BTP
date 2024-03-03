#include <stdio.h>
int fun(int n,int a[n],int sum1,int sum2,index) {
    if(index==n-1) {
        return sum1==sum2; }
    else
    return fun(n,a,sum1+a[index+1],sum2,index+1)||fun(n,a,sum1,sum2+a[index+1],index+1); }
int main() {
    int n,d=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i=i+1) {
        scanf("%d",&arr[i]);
        sum=sum+arr[i]; }
    d=fun(n,arr,0,0,0)
    return 0; }