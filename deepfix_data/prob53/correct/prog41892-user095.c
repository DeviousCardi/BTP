#include<stdio.h>
int diff(int a[],int N) {
    if(N==1)
    return a[0];
    else
    return -diff(a+1,N-1)+a[0]; }
int main() {
    int n,i,res;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    res=diff(arr,n);
    printf("%d",res);
    return 0; }