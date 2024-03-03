#include <stdio.h>
int sorting(int arr[],int size);
int main() {
    int n;
     scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
     scanf("%d",&arr[i]);
    sorting(arr,n);
    return 0; }
int sorting(int arr[],int n) {
    int i,temp,b;
    float a;
    for(int j=1;j<n-1;j++)
    { for(i=0;i<n;i++) {
        if(arr[i]>arr[i+1])
         { temp=arr[i];
          arr[i]=arr[i+1];
          arr[i+1]=temp; } } }
     if(n%2==0)
     { a=(arr[n/2]+arr[n/2-1])/2.0;
     printf("%.1f",a); }
     else
     { b=arr[n/2];
     printf("%d",b); }
    return 0; }