#include<stdio.h>
long long arr_sum( long long arr[],long n,long long * ans  );
int main() {
    long  n;
    long long  arr[1000000];
    long long  tot_sum;
    long long sum=0;
    long long * ans;
    ans=&sum
    scanf("%li",&n);
    for(long  i=0;i<n;i++){
        scanf("%lli",&arr[i]); }
    tot_sum = arr_sum(arr,n,ans);
    printf("%lli",tot_sum);
    return 0; }
 long long arr_sum( long long arr[],long  n,long long * ans){
    *ans=*ans+arr[n-1];
    if(n==1){
        return *ans; }
    return arr_sum(arr,n-1,*ans) }