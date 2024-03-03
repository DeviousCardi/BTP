#include<stdio.h>
int diff(int a[],int n) {
    if(n==0)
    return a[0];
    else
    a[1]=a[0]-a[1];
    return diff(&a[1],n-1); }
int main() {
    int n,i,a[10000000000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("%d",diff(a,n));
    return 0; }