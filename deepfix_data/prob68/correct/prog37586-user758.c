#include<stdio.h>
int pro(int arr[],int i){
    if(i==0)
    return arr[i];
    else
    return (arr[i]*pro(arr,i--)); }
int main() {
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
    int prod=pro(ar,n-1);
    printf("%d",prod);
    return 0; }