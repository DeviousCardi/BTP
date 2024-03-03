#include<stdio.h>
 int sum(int arr[],int n) {
    int sum[n+1];
    if(n==0)
    sum[0]=0;
    if(n==1)
    sum[1]=arr[0]+sum[0];
    else
    sum[n]=sum[n-1]+arr[n-1];
    return sum[n]; }
 int main() {
     int N,i;
      scanf("%d",&N);
     int arr[N];
     for(i=0;i<N;i++)
      scanf("%d",&arr[i]);
     int k=sum(arr[N],N);
     printf("%d",k); }