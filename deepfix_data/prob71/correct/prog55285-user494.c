#include <stdio.h>
void merge(int a[],int start,int n) {
    int half=n/2;
    int temp[100000],i=start,j=start+n/2,imax=start+n/2,jmax=start+n;
    for(int k=0;k<n;k++) {
        if(i<imax&&j<jmax) {
            temp[k]=(a[i]>a[j])?a[j]:a[i]; } } }
void merge_sort(int a[],int start,int n) {
    if(n>1) {
        int half=n/2;
        merge_sort(a,0,half);
        merge_sort(a,half,n-half);
        merge(a,start,n); } }
int main() {
    int n,i,j;
    scanf("%d",&n);
    int bids[n];
    for(i=0;i<n;i++) {
        scanf("%d",&bids[i]); }
    merge_sort(bids,0,n);
    return 0; }