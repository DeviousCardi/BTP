#include <stdio.h>
int main() {
    int n,i,max,min,x=0,y=0;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr[0])
    max=arr[0];
    min=arr[0];
    for(i=1;i<n;i++) {
        scanf("%d",&arr[i]);
        if(arr[i]>max) {
            max=arr[i];
            x=i; }
        if(arr[i]<min) {
            min=arr[i];
            y=i; } }
    arr[x]=min;
    arr[y]=max;
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]); }
    printf("end");
    return 0; }