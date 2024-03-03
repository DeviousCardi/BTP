#include <stdio.h>
void mergesort(int arr[],int start,int end){
    int mid=(start+end)/2;
    if(start==end)return;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end); }
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)printf("%d",arr[i]);
    return 0; }