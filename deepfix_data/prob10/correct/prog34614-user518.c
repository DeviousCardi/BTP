#include<stdio.h>
int main() {
    int n, i, j, k, l = 1;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]); }
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(arr[j] > arr[i]){
                l++; } }
        i = j-1; }
    printf("%d", l);
    return 0; }