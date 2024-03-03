#include<stdio.h>
 int sum(int arr[],int n) {
    int sum[n+1];
    if(n==0)
    return sum[0]=0;
    else
    return sum[n]=sum[n-1]+arr[n-1]; }
 int main() {
     int N,i;
      scanf("%d",&N);
     int arr[N];
     for(i=0;i<N;i++)
      scanf("%d",&arr[i]);
     printf("%d",sum(arr,N));
     return 0; }