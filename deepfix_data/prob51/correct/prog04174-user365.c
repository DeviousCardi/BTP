#include <stdio.h>
void merge(int arr[],int start,int end){
    int i,j,k,mid;
    mid=(start+end)/2;
    int comb[end-start+1];
    for(k=0;k<end-start;k++){
        for(i=start;i<mid;i++){
           for(j=mid+1;j<end;j++){
               if(arr[i]<arr[j])comb[k]=arr[i];
               else comb[k]=arr[j]; } } } }
void mergesort(int arr[],int start,int end){
    int mid=(start+end)/2;
    if(start==end) return;
    else{
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,end); } }
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)printf("%d ",arr[i]);
    return 0; }