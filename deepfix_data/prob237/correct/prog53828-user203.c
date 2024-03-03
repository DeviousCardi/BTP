#include<stdio.h>
int arr[100];
int n,k;
int getInversions(int l,int r) {
    int b[r];
    int count=0;
    for(int i=0;i<r;i++) {
        b[i]=arr[l];
        l=l+1; }
    for(int i=0;i<r;i++) {
        count=count+get();
        printf("%d\n",count); }
    return count; }
int get() {
    int count=0;
    for(int i=0;i<k;i++) {
        if((i+1)<k) {
            if(arr[i]>arr[i+1]) {
                int t=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=t;
                count=count+1; } } }
    return count; }
int main() {
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int count;
    for(int i=0;i<n;i++) {
        count=count+getInversions(i,k); }
    return 0; }