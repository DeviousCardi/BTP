#include<stdio.h>
int max(int a[],int);
int main() {
    int arr[20];
    int n,i,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    c=max(arr,n);
    printf("%d",c);
    return 0; }
int max(int a[],int size)
{   int count=1,i;
    for(i=0;i<size;i++) {
        if(a[i]<=a[i+1])
        count++; }
    return count; }