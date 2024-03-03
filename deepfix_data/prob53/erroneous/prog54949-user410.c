#include<stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    numb=arr[0];
    diff(arr,numb,1);
    return 0; }
void diff(int a[],int d,int j) {
    if(j==n-1) {
    printf("%d",&d);
    return; }
    else {
         diff(a,d-a[j],j+1) } }