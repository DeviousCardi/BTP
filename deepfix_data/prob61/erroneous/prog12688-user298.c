#include<stdio.h>
int main() {
    int n,k,i,count=0;
    int arr[n],count[100];
    for(i=0;i<n;i++) {
        arr[i]=0; }
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    for(i=1;i<=(n-1);i++) {
        for(j=1;j<=(n-1);j++) {
            if(arr[j-1]>arr[j]) {
                int t=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=t;            } } }
    for (i=0;i<n;i++) {
        printf("%d ",arr[i]); } }