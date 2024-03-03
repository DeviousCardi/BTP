#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int count=0;
    for(i=l;i<l+k-1;i++) {
        for(j=i+1;j<n;j++) {
           if(arr[i]>arr[j]) {
               count=count+1; } } }
    return count; }
int main() {
    int n;
    int k;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int l,res[n-k+1];
    for(l=0;l<=n-k;l++) {
        res[l]=getinversions(l,k); }
    for(i=0;i<n-k+1;i++) {
        for(j=0;j<n-k+1;j++) {
            if(res[i]<res[j])
            break; }
        if(j==(n-k+1)) {
        printf("%d",res[i]);
        return 0; } }
    return 0; }