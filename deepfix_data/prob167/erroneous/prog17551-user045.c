#include<stdio.h>
int sum(int b[],c);
int sum(int b[],c) {
    if(c==0)
    return b[0];
    else
    return(b[n-1]+sum(b[],n-1)); }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",a[i]);
    sum=sum(a[],n);
    printf("%d",sum);
    return 0; }