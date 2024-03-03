#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,inv=0;
    for(i=0;i<r;i++){
        for(j=i+1;j<r;j++){
            if(arr[i]>arr[j])
            inv++; } }
    return inv; }
int main() {
    int n,k;
    int i,inv;
    scanf("%d\n%d",&n,&k);
    int arr1[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++){
        inv = getInversions(i,k);
        arr1[i]=inv; }
    int max=arr1[0];
    for(i=1;i<n;i++){
        if(max<arr1[i])
        max=arr1[i]; }
    printf("%d",max);
    return 0; }