#include<stdio.h>
int sum(long a[],int n,int index);
int main() {
    long n,s,i;
    scanf("%ld",&n);
    long arr[n];
    for(i=0;i<n;i++)
    scanf("%ld",&arr[i]);
    for(i=0;i<n;i++)
    s=sum(arr,n,n-1);
    printf("%ld",s);
    return 0; }
int  sum(long a[],int n,int index) {
    if(index==0)
    return a[0];
    int s;
    s=sum(a,n,index-1)+a[index];
    return s; }