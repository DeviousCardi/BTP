#include<stdio.h>
int sum_recurs(int a[],int i) {
    if(i==0)
    return a[0];
    else
    return sum_recurs(a,i-1) +a[i]; }
int main() {
    int n,i,arr[100000],sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    sum=sum_recurs(arr,n-1);
    printf("%d",sum);
    return 0; }