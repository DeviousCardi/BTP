#include<stdio.h>
void diff(int arr[],int n);
int main() {
    int n,res=0,i;
    scanf ("%d\n",&n);
    int arr[n];
    for (i=0;i<n;i++) {
        scanf ("%d ",&arr[i]); }
   diff(arr,n);
    res=arr[n-1];
    printf ("%d",res);
    return 0; }
void diff(int arr[],int n ) {
    printf("%d",arr[0]);
    int i=1;
    if (i<n){
    arr[i]=arr[i-1]-arr[i];
    i++;
    return (diff(arr,n)); }
    return ; }