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
        for(j=i;j>0;j--) {
            if(arr[i]>arr[j-1]) {
                temp=arr[i];
                int k;
                for(k=i;k>j;k--) {
                    arr[k]=arr[k-1]; }
                arr[j]=temp;
                break; } } }
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]); }
    printf("end");
    return 0; }