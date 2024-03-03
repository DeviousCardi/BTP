#include<stdio.h>
#include<strings.h>
void print(long int arr[], long int n){
    static long int i = 0;
    if(i < n){
        printf("%lf", &arr[n-1-i]); }
    else{
        return; }
    i++;
    print(arr, n);
    return; }
int main() {
    long int n, i;
    scanf("%ld\n", &n);
    long int arr[n];
    for(i = 0; i < n; i++){
        scanf("%ld ", &arr[i]); }
    return 0; }