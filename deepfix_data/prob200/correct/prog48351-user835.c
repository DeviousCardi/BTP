#include <stdio.h>
int arr[100]={0};
int n;
int result;
int getMaxLessThan(int upperLimit) {
    if(arr[upperLimit-1]<=upperLimit)
    result=arr[n-1];
    return result; }
int main() {
    int k,i,j,temp,h;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(arr[i]<=arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp; }
            else {
                continue; } } }
    for(i=0;i<k;i++) {
        printf("%d ",arr[n-i-1]); }
    for(i=0;i<k;i++) {
        h=getMaxLessThan(arr[n-i-1]);
        printf("%d\n",h); }
    return 0; }