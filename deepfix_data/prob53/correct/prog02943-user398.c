#include<stdio.h>
int diff(int n,int arr[n],int m) {
    if(m==1)
        return arr[0]-arr[1];
    if(m!=1)
        return diff(n,arr[n],m-1)-arr[m-1]; }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d ",&arr[i]);
    int res=diff(n,arr[n],1);
    printf("%d",res);
    return 0; }