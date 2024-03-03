#include<stdio.h>
void diff(long int a[],long int d,long int j,long int size) {
    if(j==size) {
    printf("%ld",d);
    return; }
    else {
         diff(a,d-a[j],j+1,size); } }
int main() {
    long int n,numb,i;
    scanf("%ld\n",&n);
    long int arr[n];
    for(i=0;i<n;i++)
    scanf("%ld ",&arr[i]);
    numb=arr[0];
    diff(arr,numb,1,n);
    return 0; }