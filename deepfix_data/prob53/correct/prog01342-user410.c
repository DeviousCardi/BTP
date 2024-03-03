#include<stdio.h>
void diff(int a[],int d,int j,int size) {
    if(j==size-1) {
    printf("%d",d);
    return; }
    else {
         diff(a,d-a[j],j+1,size); } }
int main() {
    int n,i,numb;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    numb=arr[0];
    diff(arr,numb,1,n);
    return 0; }