#include<stdio.h>
#define max 1000000000
int product(int t[],n) {
    if(n==0) {
        return t[0]; }
    return arr[n]*product(t,n-1); }
int main() {
    int arr[max];
    int n;
    scanf("%d",&n);
    for(int i=0;i<max;i++) {
        scanf("%d ",&arr[i]); }
    printf("%d"product(arr,n));
    return 0; }