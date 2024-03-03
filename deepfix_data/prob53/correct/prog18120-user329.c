#include<stdio.h>
long int sum=0;
int difffunc(int arr[], int n) {
    if(n==0)
        return sum;
    sum = sum + difffunc(arr,n-1); }
int main() {
    int i;
    long int n,arr[100000];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
            scanf("%d", &arr[i]); }
    sum = difffunc(arr,n);
    printf("%d",sum);
    return 0; }