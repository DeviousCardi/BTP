#include<stdio.h>
int main() {
    int n,i,count=1;
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int a[n];
    for(i=0;i<n-1;i++){
        if(arr[i]<arr[i+1])
            count++;
        a[i]=count;
        if(arr[i]>arr[i+1])
            count=1; }
    int max;
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max)
        max=a[i]; }
    printf("%d",max);
    return 0; }