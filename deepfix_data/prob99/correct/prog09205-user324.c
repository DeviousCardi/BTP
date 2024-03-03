#include<stdio.h>
int main() {
    int n,i,carry=0;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=1;i<n;i++){
        if(arr[i]>arr[0]);
        carry++; }
    printf("\n");
    printf("%d",carry);
    return 0; }