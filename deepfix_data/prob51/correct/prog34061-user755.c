#include <stdio.h>
void swap(int arr[],int i,int in) {
    int t;
    t=arr[i];
    arr[i]=arr[in];
    arr[in]=t;
    return; }
int lar(int arr[],int n,int s) {
    int max,i;
    max=s;
    for(i=s;i<n;i++) {
        if(arr[i]>arr[max])
            max=i; }
    return max; }
int main() {
   int n,k,i,in;
   scanf("%d",&n);
   scanf("%d",&k);
   int arr[n];
   for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        in=lar(arr,n,i);
        swap(arr,i,in); }
    printf("%d",arr[k-1]);
    return 0; }