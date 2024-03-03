#include <stdio.h>
int bubsort(int arr[],int n)
{   int t,i,min,mini,j;
    for(i=0;i<n;i++)
    {   min=arr[i];
        mini=i;
        for(j=i;j<n;j++) {
            if(arr[j]<min) {
                min=arr[j];
                mini=i; } }
        t=arr[mini];
        arr[mini]=arr[i];
        arr[i]=t; } }
int main() {
    int n,i;
    float med;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    bubsort(arr,n);
    if(n%2==0)
    med=(arr[n/2]+arr[n/2+1])/2;
    else
    med=arr[n/2];
    printf("%.1f",med);
    return 0; }