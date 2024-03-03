#include<stdio.h>
int func(int [],int);
int main() {
    int n,l,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    l=func(arr,n);
    printf("%d",l);
    return 0; }
int func(int arr[],int n) {
    int j,l,k,max=1;
    for(j=0;j<n;j++) {
        l=0;
        for(k=j+1;k<n;k++) {
            if(arr[k]>arr[j])
            l++; }
        if(l>max) {
            max=l; } }
    return max; }