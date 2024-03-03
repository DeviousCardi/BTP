#include <stdio.h>
void swap( int arr[],int a,int b) {
    int temp;
    temp=arr[a];
    arr[a]= arr[b];
    arr[b]=temp; }
void selection_sort(int arr[],int start,int n) {
    if(start==n)
    return;
    int i,max=0,k;
    for(i=start;i<n;i++) {
        if(arr[i]>max) {
            max=arr[i];
            k=i; } }
    swap(arr,start,k);
    selection_sort(arr,start+1,n); }
int main() {
    int i,n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for( i = 0; i < n;i++)
        scanf("%d",&arr[i]);
    selection_sort(arr,0,n);
    printf("%d",arr[k-1]);
    return 0; }