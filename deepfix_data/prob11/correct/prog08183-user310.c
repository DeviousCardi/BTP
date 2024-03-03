#include <stdio.h>
int f(int arr[], int n);
int main() {
    int n, s, i;
    int sum;
    int arr[1000000];
    scanf("%d", &n);
    scanf("%d", &s);
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    sum = f(arr, n);
    if(s==sum)
        printf("YES");
    else
        printf("NO");
    return 0; }
int f(int arr[], int n) {
    if(n==1)
        return (arr[0]);
    else
        return (arr[n]+f(arr, n-1)); }