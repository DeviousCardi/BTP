#include <stdio.h>
int rev(int num[],int size,int revnum) {
    return 0; }
int main() {
    int n,d;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&d);
    rev(arr,n,d);
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0; }