#include <stdio.h>
int N;
int max(int arr[],int start,int end){
    int i=start,index=0;
    int max=0;
    for(;i<end;i++){
        if(arr[i]>=max){
            max=arr[i];
            index=i; } }
    return index; }
void swap(int arr[],int index,int start){
    int temp;
    temp=arr[start];
    arr[start]=arr[index];
    arr[index]=temp;
    return; }
void sort(int arr[],int start,int end){
    if(start==end)
        return;
    int id=max(arr,start,end);
    swap(arr,id,start);
    return sort(arr,start+1,end); }
int main() {
   int k;
   scanf("%d%d",&N,&k);
   int arr[N];
   for(int i=0;i<N;i++)
        scanf("%d",&arr[i]);
    sort(arr,0,N);
    printf("%d",arr[N-k]);
    return 0; }