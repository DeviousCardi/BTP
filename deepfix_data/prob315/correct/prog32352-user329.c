#include <stdio.h>
int main() {
    int n,i,j,count=0,arrc[1001],arr[1001],temp;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
            scanf("%d", &arr[i]); }
    for(j=0; j<n; j++) {
    for(i=0; i<n; i++) {
            if(arr[i]>arr[i+1]) {
                    temp = arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                    count++; } } }
    printf("%d\n",count);
    return 0; }