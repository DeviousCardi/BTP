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
{   int count2=1;
    for(int k=0;k<n;k++){
    int count=1;
    int t=k;
    for(int i=k;i<size;i++){
        if(a[t]<=a[i+1])
         {count++;
        t=i+1;} }
         if(count2<count)
         count2=count; }
    return count; }