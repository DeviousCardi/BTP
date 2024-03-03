#include <stdio.h>
int f(int arr[], int n, int s);
int main() {
    int n, s, i;
    int sum;
    scanf("%d", &n);
    scanf("%d", &s);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    sum = f(arr, n, s);
    printf("%d\n", sum);
    if (sum==1)
        printf("NO");
    return 0; }
int f(int arr[], int n, int s) {
    int sum;
    if(n==1)
        sum =  (arr[0]);
    else
        sum = (arr[n-1]+f(arr, n-1, s));
    if(sum==s) {
        printf("YES");
        return 0; }
    if(sum>s)
        return 1;
    else
        return (sum); }