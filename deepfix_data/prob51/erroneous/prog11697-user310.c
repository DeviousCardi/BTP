#include <stdio.h>
int main() {
   int n, k;
   int temp, swaps = 0;
   scanf("%d", &n);
   scanf("%d", &k);
   int arr[n];
   for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    while(swaps!=0) {
        swaps = 0;
        for(i=0;i<n;i++) {
            if(arr[i]<arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swaps++; } } }
    printf("%d", arr[k]);
    return 0; }