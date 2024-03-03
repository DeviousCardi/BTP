#include<stdio.h>
void diff(int arr[],int n);
int main() {
    long n,res=0,i;
    scanf ("%lli\n",&n);
    int arr[n];
    for (i=0;i<n;i++) {
        scanf ("%d ",&arr[i]); }
   diff(arr,n);
    res=arr[n-1];
    printf ("%lli",res);
    return 0; }
void diff(int arr[],int n ) {
    static int i=1;
    if (i<n){
    arr[i]=arr[i-1]-arr[i];
    i++;
    return (diff(arr,n)); }
    return ; }