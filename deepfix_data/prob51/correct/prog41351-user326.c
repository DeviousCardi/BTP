#include<stdio.h>
int main() {
    int n,k;
    scanf("%d %d ",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++)
            if(arr[i]>arr[j]) {
                int t=arr[j];
                arr[j]=arr[i];
                arr[i]=t; } }
    printf("%d",arr[n-k]); }