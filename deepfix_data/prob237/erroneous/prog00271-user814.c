#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,inv=0;
    for(i=0;i<r;i++){
        for(j=i+1;j<r;j++){
            if(arr[i]>arr[j])
            inv++; } }
    return count; }
int main() {
    int n,k;
    int i,j;
    scanf("%d\n%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",arr[i]); }
    for(i=0;i<n;i++){
        inv = getInversions(int i,int k);
        arr1[i]=inv; }
    int max=arr1[0];
    for(i=1;i<n;i++){
        if(max<arr1[i])
        max=arr1[i] }
    printf("%d",max);
    return 0; }