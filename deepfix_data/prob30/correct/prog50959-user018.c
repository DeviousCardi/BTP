#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) { }
int main() {
    int k,i,a,max;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]); }
    max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i]; } }
    for(i=0;i<k;i++){
        a=getMaxLessThan(max); }
    return 0; }