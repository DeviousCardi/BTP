#include <stdio.h>
int sum(int a[],int n) {
    if(n<0)
    return 0;
    else
    return a[n-1]+sum(a,n-2);; }
int main() {
    int arr[]={1,2,3,4,5};
    printf("%d",sum(arr,6));
    return 0; }