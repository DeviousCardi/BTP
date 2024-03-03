#include<stdio.h>
long product(int t[],int n) {
    if(n==1) {
        return t[0]; }
    else {
        return (t[n-1])*(product(t,n-1)); } }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    printf("%ld",product(arr,n));
    return 0; }