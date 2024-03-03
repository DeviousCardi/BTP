#include<stdio.h>
int diff(int a[],int m){
    if(m==00) return 0;
    int k;
    k=a[1]+diff(a+1,m-1);
    return (a[0]-k); }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    printf("%d",diff(arr,n));
    return 0; }