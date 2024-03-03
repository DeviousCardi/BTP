#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,inv=0;
    for(i=l;i<l+r;i++){
        for(j=i+1;j<l+r;j++){
            if(arr[i]>arr[j])
            inv++; } }
    return inv; }
int main() {
    int n,k;
    int i,inv,l;
    scanf("%d\n%d",&n,&k);
    int arr1[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(l=0;l<n+1-k;l++){
        inv = getInversions(l,k);
        arr1[l]=inv; }
    int max=arr1[0];
    for(l=1;l<n+1-k;l++){
        if(max<arr1[l])
        max=arr1[l]; }
    printf("%d",max);
    return 0; }