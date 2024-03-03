#include<stdio.h>
#include<strings.h>
  int rev(int start,int end,int temp,int N,int arr[]){
      if(start>=end) return 0;
      temp=arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
      return rev(start+1,end-1,0,N,arr); }
int main() {
    int N,arr[N],start=0,end=N-1,j,i;
    scanf("%d\n",&N);
    for(i=0;i<N;i++)
    scanf("%d ",&arr[i]);
    for(j=0;j<N;j++)
    printf("%d ",arr[j]); }