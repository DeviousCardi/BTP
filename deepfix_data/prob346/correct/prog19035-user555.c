#include <stdio.h>
int main() {
    int i,n,x=0,min,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    i=0;
    while(i<n) {
        min=arr[i];
        for(j=x;j<n;j++) {
            if(arr[j]<min)
                min=arr[j]; }
        arr[i]=min;
        x++;
        i++; }
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]); }
    printf("end");
    return 0; }