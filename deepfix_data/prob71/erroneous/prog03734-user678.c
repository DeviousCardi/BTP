#include <stdio.h>
int sort(int arr,int start,int end) {
    if(start>end)
    return 0;
   int max_idx=max_idx_idt(arr,end);
    swap(arr[start],k);
    return sort(arr,start+1,end); }
int max_idx_idt(int arr, int size) {
       int maxx=0;
       int k;
       for(int i=0;i<size;i++) {
           if(arr[i]>maxx) {
           k=i; } }
       return k; }
    void swap(int k, int l) {
    int temp;
    temp=k;
    k=l;
    l=temp; }
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for(int i=0;i<n;i++) {
      scanf("%d", &arr[i]); }
    int array[n];
    array=sort(arr,0,n-1);
    float median;
    if(n%2==0) {
        median=(arr[(n-1/2)-1]+arr[(n+1/2)+1])/2;
        printf("%d", median); }
    return 0; }