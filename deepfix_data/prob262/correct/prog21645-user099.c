#include<stdio.h>
#include<strings.h>
void scanner(int arr[],int n,int k) {
    scanf("%d ",&arr[k]);
    if(k==n-1) return;
    scanner(arr,n,k+1);
    return; }
void rev_print(int arr[],int n) {
    printf("%d ",arr[n-1]);
    if(n==1) return;
    rev_print(arr,n-1);
    return; }
int main() {
    int n;
    scanf("%d\n",&n);
    int arr[n];
    scanner(arr,n,0);
    rev_print(arr,n);
    return 0; }