#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,count=0;
    for(i=l+1;i<l+r-1;i++){
        if(arr[l]>arr[i])
        count++; }
    return count; }
int main() {
    int n,k,i,max,l;
    scanf("%d%d",&n,&k);
    int arr[n],count[n-k+1];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(l=0;l<n-k+1;l++) {
        count[l]=getInversions(l,k); }
    for(i=0;i<n-k-2;i++) {
        if(count[i]>count[i+1])
        max=count[i];
        else max=count[i+1]; }
    printf("%d",max);
    return 0; }