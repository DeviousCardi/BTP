#include<stdio.h>
long long arr_sum(long long [],long  int);
int main() {
    long int n;
    long long arr[1000000];
    long long tot_sum;
    scanf("%d",&n);
    for(long int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    tot_sum = arr_sum(arr,n);
    printf("%d",tot_sum);
    return 0; }
long long arr_sum(long long arr[],long int n){
    if(n==1){
        return arr[0]; }
    return (arr_sum(arr,n-1) + arr[n-1]); }