#include<stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int m=arr[0];
    for(int i=0;i<n;i++)
        if(m<arr[i]&&arr[i]<upperLimit)
            m=arr[i];
    return m; }
int main() {
    int n,k;
    scanf("%d%d",&n,&k); }