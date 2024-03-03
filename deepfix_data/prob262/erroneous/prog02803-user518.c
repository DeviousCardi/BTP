#include<stdio.h>
#include<strings.h>
void print(long int arr[], long int n){
    for(i = 0; i < n; i++){
        printf("%ld ", arr[n-1-i]); }
    return; }
int main() {
    long int n, i;
    scanf("%ld\n", &n);
    long int arr[n];
    for(i = 0; i < n; i++){
        scanf("%ld ", &arr[i]); }
    print(arr, n);
    return 0; }