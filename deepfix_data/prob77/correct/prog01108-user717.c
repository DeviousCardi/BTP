#include <stdio.h>
int main() {
    int n;
    int i,j,k,t;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    int max=arr[0];
    int min=arr[0];
    for(i=0;i<n;i++) {
        if(arr[i]>=max) {
        max=arr[i];
        j=i; }
        if(arr[i]<=min) {
            min=arr[i];
            k=i; } }
    t=arr[j];
    arr[j]=arr[k];
    arr[k]=t;
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]); }
    printf("end");
    return 0; }