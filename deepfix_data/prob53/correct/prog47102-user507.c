#include<stdio.h>
int diff(int arr[],int size);
int main() {
    int n,res=0,i;
    scanf ("%d\n",&n);
    int arr[n];
    for (i=0;i<n;i++) {
        scanf ("%d ",&arr[i]); }
    res=diff(arr,n);
    printf ("%d",res);
    return 0; }
int diff(int arr[],int n ) {
    int i=0,x[100];
    if (i<n){
    x[i]=arr[i]-arr[i+1];
    i++;
    return (diff(x[i],n-i-1)); } }