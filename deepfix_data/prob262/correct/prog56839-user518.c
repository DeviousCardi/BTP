#include<stdio.h>
#include<strings.h>
void print(long int arr[], int n){
    static int i = 0;
    printf("%lf", &arr[i]);
    i++;
    print(arr, n);
    return; }
int main() {
    long int n, i;
    scanf("%lf\n", &n);
    long int arr[n];
    for(i = 0; i < n; i++){
        scanf("%lf ", &arr[i]); }
    print(arr, n);
    return 0; }