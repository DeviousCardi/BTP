#include<stdio.h>
int mult(int arr[],int index){
    if(index==0) return arr[0];
    return arr[index]*mult(arr[], index-1); }
int main() {
    int n,i,x;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
                scanf("%d",&arr[i]); }
    x=mult(arr[],n);
    return 0; }