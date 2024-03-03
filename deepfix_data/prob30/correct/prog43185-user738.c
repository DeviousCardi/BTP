#include <stdio.h>
int arr[100]={0};
int n,i,k;
int getMaxLessThan(int upperLimit) {
    int temp,i,j;
 for(i=0;i<=n-1;i++) {
        for(j=i+1;j<=n;j++) {
            if(arr[i]>arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp; } } }
    printf("%d",arr[n]);
    return arr[n]; }
int main() {
        int l;
         scanf("%d",&n);
         for(i=0;i<n;i++)
         scanf("%d",&arr[i]);
         int s=getMaxLessThan(1);
    return 0; }