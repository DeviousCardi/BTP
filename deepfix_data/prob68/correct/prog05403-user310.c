#include<stdio.h>
int f(int arr[], int n);
int main() {
    int n;
    int i;
    int arr[100];
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("%d", f(arr, n));
    return 0; }
int f(int arr[], int n) {
    if(n==1)
        return (arr[0]);
    else
        return (f(arr, n-1)*arr[n]); }