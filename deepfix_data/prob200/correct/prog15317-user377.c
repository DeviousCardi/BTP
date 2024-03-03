#include <stdio.h>
#include<limits.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=arr[0];
    for(int i=0;i<n;i++) {
        if(arr[i]<=upperLimit&&arr[i]>=max)
        max=arr[i]; }
    return max; }
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    arr[0]=getMaxLessThan(INT_MAX);
    printf("%d",INT_MAX);
    printf("%d ",arr[0]);
    for(int i=1;i<k;i++)
    arr[i]=getMaxLessThan(arr[i-1]);
    for(int i=0;i<k;i++)
    printf("%d\n",arr[i]);
 return 0; }