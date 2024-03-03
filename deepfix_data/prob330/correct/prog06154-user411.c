#include <stdio.h>
int main(){
    int n,i;
    int count;
    scanf("%d",n);
    int arr[n];
    for(i=1;i<n;i++) {
    if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1])) {
        count=0;
          count++; } }
    printf("%d",count);
    return 0; }