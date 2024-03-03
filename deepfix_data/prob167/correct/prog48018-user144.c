#include<stdio.h>
int arr_sum(int [],int);
int main() {
    int n;
    int arr[1000000];
    int tot_sum;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    tot_sum = arr_sum(arr,n);
    printf("%d",tot_sum);
    return 0; }
int arr_sum(int arr[],int n){
    if(n==1){
        return arr[0]; }
    return (arr_sum(arr,n-1) + arr[n-1]); }