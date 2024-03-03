#include<stdio.h>
 int sum(int arr[],int n) {
     if(n==0)
      return 0;
    else
      return arr[n-1]+sum(arr,n-1); }
 int main() {
     int N,i;
     if(2<=N&&N<=10*10*10*10*10)
      scanf("%d",&N);
     int arr[N];
    for(i=0;i<N;i++)
      scanf("%d",&arr[i]);
     printf("%d",sum(arr,N));
    return 0; }