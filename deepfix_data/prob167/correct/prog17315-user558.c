#include<stdio.h>
int sum(int a[],int n) {
    if(n==0)
    return a[0];
    else
    return (a[n]+sum(a,n-1)); }
int main() {
    int n,s,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    s=sum(a,n);
    printf("%d",s);
    return 0; }