#include<stdio.h>
int main() {
    int n,s,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    int sum(int a[],int n,int index);
    s=sum(arr,n,n-1,0);
    printf("%d",s);
    return 0; }
int  sum(int a[],int n,int index) {
    if(index==0)
    return a[0];
    int s;
    s=sum(a,n,index-1,sum1)+a[index];
    return s; }