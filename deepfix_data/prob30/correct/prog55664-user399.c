#include<stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int m=arr[0];
    for(int i=0;i<n;i++) {
        if(m<arr[i]&&arr[i]<upperLimit) {
            m=arr[i];
            printf("%d",m); } }
    return m; }
int main() {
    int n,k,i;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int g=arr[0];
    for(i=0;i<n;i++)
        if(g<arr[i])
            g=arr[i];
    getMaxLessThan(g); }