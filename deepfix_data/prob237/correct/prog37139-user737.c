#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,count=0;
    for(i=l+1;i<=l+r-1;i++){
        if(arr[l]>arr[i])
        count++; }
    return count; }
int main() {
    int n,k,i,max=0,l;
    scanf("%d%d",&n,&k);
    int count[n-k+1];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(l=0;l<n-k+1;l++) {
        count[l]=getInversions(l,k); }
                for(l=0;l<n-k+1;l++) {
        printf("%d ", count[l]); }
    for(i=0;i<n-k+1;i++) {
        if(count[i]>=max)
        max=count[i]; }
    printf("%d",max);
    return 0; }