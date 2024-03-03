#include<stdio.h>
#define max 1000000000
int product(int t[],int n) {
    if(n==1) {
        return t[0]; }
    else {
        return (t[n-1])*(product(t,n-1)); } }
int main() {
    int arr[max];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    printf("%d",product(arr,n));
    return 0; }