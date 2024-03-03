#include <stdio.h>
int arr[100]={0};
int n,k;
int max(int a[],int m) {
    int maxi=a[0];
    for(int i=0;i<m;i++) {
        if(maxi<a[i])
        maxi=a[i]; }
    return maxi; }
int getMaxLessThan(int upperLimit) {
    int ma;
    for(int i=0;i<n;i++) {
        if(arr[i]<upperLimit) {
                ma=arr[i];
                break; } }
    for(int i=0;i<n;i++) {
            if(arr[i]>upperLimit)
            continue;
            else {
                    if(arr[i]>ma)
                    ma=arr[i]; } }
        return ma; }
int main() {
    scanf("%d%d",&n,&k);
    int i,j;
    for(i=0;i<n;i++) {
            scanf("%d",&arr[i]); }
    int c[100];
    c[0]=max(arr,n);
    for(j=0;j<k-1;j++) {
            c[j+1]=getMaxLessThan(c[j]); }
    printf("%d",c[k-1]);
    return 0; }