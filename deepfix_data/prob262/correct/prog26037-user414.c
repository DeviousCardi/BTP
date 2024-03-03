#include<stdio.h>
#include<strings.h>
int rev(int [],int);
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    rev(arr,n);
    return 0; }
int rev(int c[],int k) {
    if(k==0) {
        printf("%d ",c[0]);
        return 0; }
    printf("%d ",c[k]);
    k--;
    rev(c,k);
    return 0; }