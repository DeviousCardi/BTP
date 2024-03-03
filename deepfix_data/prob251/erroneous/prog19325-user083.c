#include <stdio.h>
#include <stdlib.h>
long int t=0;
int chck(int arr[],n){
    int i;
    for(i=0;i<n-1;i++){
        if(arr[i+1]-arr[i] < 0)
        return 0; }
    return 1; }
void clr(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        arr[i]=0; } } { }
void count(int i,int n,int arr[n]){
    if(n==0){
        if(chck(arr,n)==1)
        t++;
        return; }
    if(n<0||i>=n)
    return;
    arr[i]=1;
    count(i+1,n-1,arr);
    arr[i]=3;
    count(i+1,n-3,arr);
    arr[i]=5;count(i+1,n-5,arr);
    return; }
int main() {
    int n,arr[n];
    scanf("%d",&n);
    clr(arr,n);
    count(0,n,arr);
    printf("%d",t);
    return 0; }