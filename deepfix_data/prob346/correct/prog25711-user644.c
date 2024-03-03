#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,j;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int temp;
    for(i=1;i<n;i++) {
        for(j=i-1;j>=0;j--) {
            if(arr[i]>arr[j]) {
                temp=arr[i];
                int k;
                for(k=i-1;k>=j+1;k--) {
                    arr[k+1]=arr[k]; }
                arr[j+1]=temp; } } }
    for(i=0;i<n;i++) {
        printf("%d",arr[i]); }
    printf("end");
    return 0; }