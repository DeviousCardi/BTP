#include <stdio.h>
int main(){
    int n, i, count = 0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(i > 1){
            if((arr[i-1] > arr[i-2]) && (arr[i-1] > arr[i])){
                count++; } } }
    printf("%d", count);
    return 0; }