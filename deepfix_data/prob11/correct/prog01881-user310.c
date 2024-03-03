#include <stdio.h>
int flag = 0;
int f(int arr[], int n, int s);
int main() {
    int n, s, i;
    int x, temp;
    scanf("%d", &n);
    scanf("%d", &s);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    for(i=0;i<n/2;i++) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1]=temp; }
   if(flag!=1)
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
            flag = 1; }
        else
            return (sum); }