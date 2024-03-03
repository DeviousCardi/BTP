#include <stdio.h>
int n,k,temp=0,max=0;
void sort(int arr[],int start,int end) {
    if(start==end)
    return;
    for(int i=0;i<=end;i++) {
        max=arr[i];
        for(int j=i;j<=end;j++) {
            if(arr[j]>max) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp; } } }
    return sort(arr,start+1,end); }
int main() {
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,0,n-1);
    printf("%d",a[k-1]);
    return 0; }