#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,j;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int temp;
    for(i=0;i<n;i++); {
        for(j=0;j<i;j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp; } } }
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]); }
    printf("end");
    return 0; }