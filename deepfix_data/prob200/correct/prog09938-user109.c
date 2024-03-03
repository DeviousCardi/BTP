#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int t=0;
    for(int i=0;i<n;i++){
        if(arr[i]>t&&arr[i]<upperLimit)t=arr[i]; }
    return t; }
int main() {
    int k,temp=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(int i=0;i<n;i++){
        if(temp<arr[i])temp=arr[i]; }
    for(int i=0;i<k;i++){
        printf("%d\n",temp);
        temp=getMaxLessThan(temp); }
    return 0; }