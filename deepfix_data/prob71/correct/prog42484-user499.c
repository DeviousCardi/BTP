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
    for(i=0;i<n;i++) {
        if(arr[i]>arr[i+1])
         { temp=arr[i];
          arr[i]=arr[i+1];
          arr[i+1]=temp; } }
     if(n%2==0)
     { a=(arr[n/2]+arr[n/2+1])/2;
     printf("%f",a); }
     else
     { b=arr[n/2];
     printf("%d",b); }
    return 0; }