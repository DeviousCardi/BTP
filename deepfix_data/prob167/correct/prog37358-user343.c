#include<stdio.h>
int add(long int a[],int start,int end) {
    int s=0;
    if (start=end)
        return a[end];
    else
        return s+add(a,start+1,end); }
int main() {
    int n;
      scanf("%d",&n);
    long int arr[n];
    for (int i=0;i<n;i++)
        scanf("%ld",&arr[i]);
    int sum;
    sum=add(arr,0,n-1);
    return 0; }