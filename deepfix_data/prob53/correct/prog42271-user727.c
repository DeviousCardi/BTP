#include<stdio.h>
int flag=-1;
long int diff(long int a[],int n) {
    if(n==3)
    return 0;
    if(flag==-1)
    return a[0]+diff(&a[1],n-1);
    flag=1;
    return -a[0]+diff(&a[1],n-1); }
int main() {
    int n,i;
    long int a[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    printf("%ld",diff(a,n));
    return 0; }