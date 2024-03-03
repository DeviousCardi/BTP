#include<stdio.h>
int rec_sum(int arr[],int start,int size) {
    if(start>size)
    return 0;
    int sum;
    sum=arr[start]+rec_sum(int arr[],int start+1,int size);
    return sum; }
int main() {
int n;
scanf("%d", &n);
int arr[n];
for(int i=0;i<n;i++) {
    scanf("%d", &arr[i]); }
printf("%d", rec_sum(arr[n],0,n));
    return 0; }