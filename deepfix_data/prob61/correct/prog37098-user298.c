#include<stdio.h>
int main() {
    int n,k,t,i;
    int arr[n];
    for(i=0;i<n;i++) {
        arr[i]=0; }
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    for(i=1;i<=(n-1);i++) {
        for(int j=1;j<=(n-1);j++) {
            if(arr[j-1]>=arr[j]) {
                 t=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=t;            } } }
    for (i=0;i<n;i++) {
        printf("%d ",arr[i]); }
    return 0; }