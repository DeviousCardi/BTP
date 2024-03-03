#include<stdio.h>
long sum(int arr[],int b) {
    if(b==0)
    return arr[b];
    else {
        return (arr[b]+sum(arr,b-1)); } }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    sum(arr,n-1);
    printf("%d",sum(arr,n-1));
    return 0; }