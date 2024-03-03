#include<stdio.h>
int n;
int sum(int arr[n]){
    int s;
    if(arr[n]==arr[0])
    return s;
    s= arr[n-1]+ sum(arr[n-1]); }
int main() {
    int n,i,x;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",arr[i]); }
    x= sum(arr[n]);
    printf("%d",x);
    return 0; }