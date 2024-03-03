#include<stdio.h>
int sum_rec(int a[],int s);
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int c=sum_rec(arr,n);
    printf("%d",c);
    return 0; }
int sum_rec(int a[],int s) {
    int sum=0,i=0;
    if(s<=1)
    return s;
    else{
        sum=sum+sum_rec(a[i],s);
        i++; }
    return 0; }