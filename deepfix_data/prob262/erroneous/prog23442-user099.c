#include<stdio.h>
#include<strings.h>
void scanner(int arr[],int k) {
    scanf("%d ",&arr[n-k]);
    if(k==1) return;
    scanner(arr,k-1);
    return; }
void rev_print(int arr[],int k) {
    printf("%d ",arr[k-1]);
    if(k==1) return;
    rev_print(arr,k-1);
    return; }
int main() {
    int n;
    scanf("%d\n",&n);
    int arr[n];
    scanner(arr,n);
    rev_print(arr,n);
    return 0; }