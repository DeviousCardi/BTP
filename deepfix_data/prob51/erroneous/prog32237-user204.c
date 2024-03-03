#include <stdio.h>
void sort(int arr[],int start,int end) {
    if(start>end) {
        return; }
    int i,index;
    max=arr[start];
    for(i=start;i<n-start;i++) {
        if(max<arr[i]) {
            max=arr[i];
            index=i; } }
    swap(arr[start],arr[i]);
    sort(arr,start+1,end) }
int main() {
   int n,k;
   scanf("%d",&n);
   scanf("%d",&k);
   int arr[n];
   for(i=0;i<n;i++) {
       scanf("%d",&arr[i]) }
   sort(arr,0,n-1);
    return 0; }