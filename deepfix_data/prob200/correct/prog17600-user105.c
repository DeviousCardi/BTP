#include <stdio.h>
int arr[100]={0};
int n,i;
int getMaxLessThan(int upperLimit) {
    for(i=1;i<n;i++){
        upperLimit=arr[0];
        if(arr[i]>upperLimit){
            upperLimit=arr[i]; }
        else
        continue; }
    return upperLimit; }
int main() {
    int n,k,p,arr[100];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d ",&p);
        arr[i]=p; }
    return 0; }