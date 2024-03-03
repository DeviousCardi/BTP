#include<stdio.h>
int a[100000];
int n;
int sum(n,int k) {
    k=a[n-1];
    sum(1)=a[0];
    if(n==1)
    return sum(1);
    else
    return (k+sum(n-1)); }
int main() {
    int n;
    scanf("%d ",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    printf("%d",sum(a,n));
    return 0; }