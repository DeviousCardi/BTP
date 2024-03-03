#include <stdio.h>
int main() {
    int n,k;
    int arr[100000];
    scanf("%d %d",&n,&k);
    for(int i=0; i<n; i++) {
        scanf("%d ", &arr[i]); }
    int swap;
    for(int a =0; a<n-1; a++) {
        for(int b=0; b<n-1; b++) {
            if(arr[b] < arr[b+1]) {
                swap = arr[b];
                arr[b] = arr[b+1];
                arr[b+1] = swap; } } }
    int result;
    result = arr[k-1];
    printf("%d",result);
    return 0; }