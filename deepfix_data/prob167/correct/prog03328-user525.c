#include<stdio.h>
int a[100000];
int fun(int n) {
    if(n>0)
    return a[n]+fun(n-1);
    if(n==0)
    return a[0]; }
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int sum=fun(n);
    printf("%d",sum);
    return 0; }