#include<stdio.h>
int sum1(int a[],int m){
    if(m==0) return 0;
    int k;
    k=a[1]+sum1(a+1,m-1);
    return k; }
int main() {
    int n;
    scanf("%d",&n);
    long int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    printf("%d",arr[0]-sum1(arr,n));
    return 0; }