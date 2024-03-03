#include<stdio.h>
int sum(int arr[],int size)
    { if(size==0)
      return 0;
     else
     return (sum(arr,size-1))+arr[size-1]; }
int main() {
    int N ,arr[100];
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&arr[i]); }
    return 0; }