#include<stdio.h>
#include<strings.h>
  int rev(int start,int end,int temp,int arr[]){
      if(start>=end) return 0;
      temp=arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
      return rev(start+1,end-1,temp,arr); }
int main() {
    int N,arr[N],j,i,temp=0;
    scanf("%d\n",&N);
    for(i=0;i<N;i++)
    scanf("%d ",&arr[i]);
    rev(0,N-1,temp,arr);
    for(j=0;j<N;j++)
    printf("%d ",arr[j]); }