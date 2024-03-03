#include<stdio.h>
int n,s=0;
int sum(int arr[],int n){
    int s;
    if(n!=0)
    s= arr[n-1]+sum(arr[n-1],n-1);
    else
    return s; }
int main() {
    int n,i,x;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    x= sum(arr[n],n);
    printf("%d",x);
    return 0; }