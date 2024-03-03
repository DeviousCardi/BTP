#include<stdio.h>
#include<strings.h>
 int rev(int arr[],int i,int n); {
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
        if(i=n/2) {
            return; }
        rev(int arr[],i+1,n-1); }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    rev(a[],0,n);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0; }