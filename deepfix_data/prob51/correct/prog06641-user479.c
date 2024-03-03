#include <stdio.h>
int main() {
    int i,n,k,max1 = 0,max2 = 0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for( i = 0; i < n;i++) {
        scanf("%d",&arr[i]);
        if(arr[i] > max1 && arr[i] > max2) {
            max2 = max1;
            max1 = arr[i]; }
        else if(arr[i] > max1 && arr[i] < max2){
            max1 = arr[i]; } }
    printf("%d",max2);
    return 0; }