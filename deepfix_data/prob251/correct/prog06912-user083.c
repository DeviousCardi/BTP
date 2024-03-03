#include <stdio.h>
#include <stdlib.h>
int t=0;
int chck(int arr[],int n){
    int i;
    for(i=0;i<n-1;i++){
        if(arr[i+1]-arr[i] > 0)
        return 0; }
    return 1; }
void clr(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        arr[i]=0; } }
void count(int i,int n,int arr[n],int sum){
    if(sum==0){
        if(chck(arr,i)==1)
        t++;
        return; }
    if(sum<0||i>=n)
    return;
    if(chck(arr,i)==0)
    return;
    arr[i]=1;
    count(i+1,n,arr,sum-1);
    arr[i]=3;
    count(i+1,n,arr,sum-3);
    arr[i]=5;count(i+1,n,arr,sum-5);
    return; }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    clr(arr,n);
    count(0,n,arr,n);
    printf("%d",t);
    return 0; }