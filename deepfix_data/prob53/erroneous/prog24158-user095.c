#include<stdio.h>
int diff(int a[],int N) {
    if(N==1)
    return a;
    else
    return a[]-diff(1+a,N-1); }
int main() {
    int n,i,res;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    res=diff(arr,n);
    printf("%d",res);
    return 0; }