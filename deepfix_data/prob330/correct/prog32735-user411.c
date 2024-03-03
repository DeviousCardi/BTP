#include <stdio.h>
int main(){
    int n,i;
    int count=0;
    scanf("%d",n);
    int arr[n];
    for(i=1;i<n;i++) {
    scanf("%d",i); }
    for(i=1;i<n;i++) {
    if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1])) {
          count++; } }
    printf("%d",count);
    return 0; }