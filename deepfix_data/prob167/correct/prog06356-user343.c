#include<stdio.h>
int add(long int a[],int start,int end) {
    int s;
    if (start==end)
        return s=a[end];
    else
        return s+add(a,start+1,end); }
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