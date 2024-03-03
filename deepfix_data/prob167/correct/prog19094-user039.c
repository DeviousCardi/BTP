#include<stdio.h>
int sum(int arr[],int b) {
    if(b==0)
    return b;
    else {
        return arr[b];
        sum==arr[b] + sum(arr,b-1) ;
        return sum; } }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    sum(arr,n-1);
    return 0; }