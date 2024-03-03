#include <stdio.h>
void merge(int arr[],int start,int end){
    int i,j,mid;
    mid=(start+end)/2;
    for(i=start;i<mid;i++){
        for(j=mid+1;j<end;j++){
            if(arr[i]>arr[j])arr[i]=arr[j]; } }
    return; }
void mergesort(int arr[],int start,int end){
    int mid=(start+end)/2;
    if(start==end) return;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,end); }
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    mergesort(arr,0,n-1);
    printf("%d ",arr[n-k-1]);
    return 0; }