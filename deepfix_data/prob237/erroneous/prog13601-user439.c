#include<stdio.h>
int max(int a[],int n);
int arr[100];
int getInversions(int l,int r) {
    int i,j,count=0;
    for(i=l;i<=l+r-1;i++) {
        for(j=i+1;j<=l+r-1;j++) {
            if(arr[i]>arr[j]) {
                count=count+1; } } }
    return count; }
int main() {
    int n,i;k=0;
    scanf("%d%d",&n,&k);
    int b[100]=0;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;k+i<=n;i++) {
        b[i]=getInversions(i,k+i); }
    printf("%d",max(b,n-k+1));
    return 0; }
int max(int a[],int n) {
    int max=a[0];
    for(int i=0;i<n;i++) {
        if(a[i]>max) {
            max=a[i]; } }
    return max; }