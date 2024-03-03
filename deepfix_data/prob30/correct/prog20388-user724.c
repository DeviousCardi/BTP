#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int j,i,l,maxi;
    for(j=0;j<n;j++) {
        scanf("%d",arr[j]); }
    for(i=0;i<n;i++) {
        for(j=i;j<n-1;j++) {
            if(arr[i]<arr[j+1])
            l=arr[j+1];
            arr[j+1]=arr[i];
        }printf("%d",arr[0]); } }
int main() {
    int k,i;
    scanf("%d",&k);
    for(i=0;i<k;i++) {
        printf("%d\n", getMaxLessThan( k )); }
    return 0; }