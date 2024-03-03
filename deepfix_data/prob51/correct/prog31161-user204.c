#include <stdio.h>
void swap(int a,int b) {
    int temp;
    temp=a;
    a=b;
    b=temp;
    return; }
void sort(int arr[],int start,int end) {
    if(start=end) {
        return; }
    int i,index=0,max;
    max=arr[start];
    for(i=start;i<=end-start;i++) {
        if(max<arr[i]) {
            max=arr[i];
            index=i; } }
    swap(arr[start],arr[index]);
    sort(arr,start+1,end); }
int main() {
   int n,k,i;
   scanf("%d",&n);
   scanf("%d",&k);
   int arr[n];
   for(i=0;i<n;i++) {
       scanf("%d",&arr[i]); }
   sort(arr,0,n-1);
   printf("%d",arr[k-1]);
    return 0; }