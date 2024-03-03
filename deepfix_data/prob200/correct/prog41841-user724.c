#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int j,n,k,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int max=0;
    for(j=0;j<n;j++) {
        if(arr[j]>max) {
            max=arr[j]; } }
    getMaxLessThan(max); }
int main() {
    return 0; }