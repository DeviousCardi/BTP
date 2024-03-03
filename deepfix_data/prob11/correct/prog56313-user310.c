#include <stdio.h>
int f(int arr[], int n);
int main() {
    int n, s, i;
    int sum;
    scanf("%d", &n);
    scanf("%d", &s);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    sum = f(arr, n);
    printf("%d", sum);
    if(s==sum)
        printf("YES");
    else
        printf("NO");
    return 0; }
int f(int arr[], int n) {
    if(n==1)
        return (arr[0]);
    else
        return (arr[n-1]+f(arr, n-1)); }