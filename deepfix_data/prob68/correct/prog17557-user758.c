#include<stdio.h>
int pro(int arr[],int i){
    if(i==0)
    return arr[i];
    else
    return (arr[i]*pro(arr,--i)); }
int main() {
    int n;
    scanf("%d\n",&n);
    int ar[n];
    for(int j=0;j<n;j++)
    scanf("%d",&ar[j]);
    long int prod=pro(ar,n-1);
    printf("%ld",prod);
    return 0; }