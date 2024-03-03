#include <stdio.h>
void mergesort(int arr[],int start,int end){
    int mid=(start+end)/2;
    if(start==end) return;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge() }
void merge(int arr[],int start,int end){
    int i,j,mid;
    mid=(start+end)/2;
    int comb[n];
    for(i=start;i<mid;i++){
        for(j=mid+1;j<end;j++){
            if(arr[i]<arr[j]){
                comb[i]=arr[i]; }
            else comb[i]=arr[j]; } } }
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)printf("%d ",arr[i]);
    return 0; }