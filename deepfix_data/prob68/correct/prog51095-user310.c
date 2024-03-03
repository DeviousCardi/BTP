#include<stdio.h>
long long int f(int arr[], int n);
int main() {
    int n;
    int i;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("%d", f(arr, n));
    return 0; }
long long int f(int arr[], int n) {
    if(n==1)
        return (arr[0]);
    else
        return (f(arr, n-1)*arr[n-1]); }