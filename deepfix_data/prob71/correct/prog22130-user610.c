#include <stdio.h>
int median(int arr[],int n) {
    int i,j;
    float k;
    for(i=0;i<n;i++) {
        for(j=0;j<n-1;j++) {
            if(arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp; } } }
    if(n%2!=0)
        printf("%d",arr[n/2]);
    else {
        k=(arr[n/2-1]+arr[n/2])*0.5;
        printf("%.1f",k); }
    return 0; }
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    median(arr,n);
    return 0; }