#include <stdio.h>
int main() {
    int i,n,x=0,min,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++) {
        min=arr[i];
        for(j=i+1;j<n;j++) {
            if(arr[j]<=min) {
                tmp=min;
                min=arr[j];
                arr[j]=tmp; } }
        arr[i]=min; }
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]); }
    printf("end");
    return 0; }