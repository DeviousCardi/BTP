#include <stdio.h>
int check(int a[], int sum, int n);
int main() {
    int n, s;
    int i;
    scanf("%d", &n);
    scanf("%d", &s);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    if(check(arr, s, n)==1)
        printf("YES");
    else
        printf("NO");
    return 0; }
int check(int a[], int sum, int n) {
    if(n==0)
        return 0;
   if(a[n]==sum)
        return 1;
    else if(a[n]>sum)
        return (check(a, sum, n-1));
    else
        return (check(a, sum-a[n], n-1)); }