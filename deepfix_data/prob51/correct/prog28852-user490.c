#include <stdio.h>
int n,k,temp=0;
void sort(int arr[],int start,int end) {
    if(start==end)
    return;
    for(int i=start;i<=end;i++) {
        if(arr[i]>start) {
            temp=arr[start];
            arr[start]=arr[i];
            arr[i]=temp; } }
    return sort(arr, start+1, end); }
int main() {
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,0,n-1);
    printf("%d",a[k-1]);
    return 0; }