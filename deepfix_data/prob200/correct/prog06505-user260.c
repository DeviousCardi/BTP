#include <stdio.h>
int arr[100]={0};
int n,k,j=0;
int getMaxLessThan(int upperLimit) {
    int t=0,i;
    for(i=0;i<n;i++) {
        if(arr[i]<upperLimit&&arr[i]>t)
            t=arr[i];
            arr[i]=0; }
    return t; }
int main() {
    int i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<k;i++)
    getMaxLessThan(100000);
    return 0; }