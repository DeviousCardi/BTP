#include <stdio.h>
int main(){
    int n,i;
    int count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
    scanf("%d",&arr[i]); }
    for(i=1;i<n-1;i++) {
    if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1])) {
     count=count+1; } }
    printf("\n%d",count);
    return 0; }