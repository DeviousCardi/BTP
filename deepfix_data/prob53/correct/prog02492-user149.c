#include<stdio.h>
int f(int a[],int n) {
    if(n<0)
    return 0;
    else
    return a[n]-f(a,n-1); }
int main() {
    int a[1000],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("%d",f(a,n));
    return 0; }