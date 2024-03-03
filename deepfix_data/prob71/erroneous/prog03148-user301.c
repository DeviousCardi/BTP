#include <stdio.h>
void merge(int arr[],int start,int n) {
    int i=start,temp[n],j=start + n/2,k=0,lim_i=start + n/2,lim_j=start + n;
    for(k=0;k<n;k++) {
        if(i<lim_i && j<lim_j) {
            if(arr[i]<arr[j]) {
                temp[k]=arr[i];
                i++; }
            else {
                temp[k]=arr[j];
                j++ } }
        else if(i==lim_i) {
            temp[k]=arr[j];
            j++; }
        else {
            temp[k]=arr[i];
            i++; } } }
int main() {
    int n,i,arr[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    merge(arr,0,n);
    return 0; }