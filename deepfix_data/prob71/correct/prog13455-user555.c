#include <stdio.h>
int main() {
    int n,i,j,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            if(arr[j]>arr[i]) {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp; } } }
    if(n%2!=0) {
        printf("%d",arr[n/2]); }
    else {
        double x=(arr[n/2-1]+arr[n/2])/2.0; {
            printf("%.1lf",x); } }
    return 0; }