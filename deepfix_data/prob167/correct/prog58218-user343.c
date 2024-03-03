#include<stdio.h>
long int add(long int a[],int start,int end) {
    if (start==end)
        return a[start];
    else
        return a[start]+add(a,start+1,end); }
int main() {
    int n;
      scanf("%d",&n);
    long int arr[n];
    for (int i=0;i<n;i++)
        scanf("%ld",&arr[i]);
    long int sum;
    sum=add(arr,0,n-1);
    printf("%ld",sum);
    return 0; }