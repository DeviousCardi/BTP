#include<stdio.h>
int arr[100]={0};
int n;
int getMax() {
    int m=arr[0];
    for(int i=0;i<n;i++)
        if(m<arr[i])
            m=arr[i];
    return m; }
int getMaxLessThan(int upperLimit) {
    int m=arr[0];
    for(int i=0;i<n;i++)
        if(m<arr[i]&&arr[i]<upperLimit)
            m=arr[i];
    return m; }
int main() {
    int n,k,g;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    g=getMax();
    while(k!=0) {
        printf("%d",g);
        g=getMaxLessThan(g);
        k--; } }