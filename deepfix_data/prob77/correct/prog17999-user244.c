#include <stdio.h>
int main() {
    int n,maxi=0,mini=0,temp,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        if(arr[i]>arr[maxi])
        maxi=i;
        if(arr[i]<arr[mini])
        mini=i; }
    temp=arr[maxi];
    arr[maxi]=arr[mini];
    arr[mini]=temp;
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("end");
    return 0; }