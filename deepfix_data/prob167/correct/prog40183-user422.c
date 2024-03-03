#include<stdio.h>
int n;
int sum(int arr[]){
    int s;
    s= arr[n-1]+sum(arr[n-1]);
    if(n==0)
    return s; }
int main() {
    int n,i,x;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    x= sum(arr[n]);
    printf("%d",x);
    return 0; }