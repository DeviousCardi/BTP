#include<stdio.h>
int sum(int n,int a[n],int start) {
    int b;
    b=b+a[start];
    if(start==n-1)
    return b;
    else
    return sum(a[n],n,start+1) }
int main() {
    int n,i,b;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    b=sum(a[n],n,0);
    printf("%d",b);
    return 0; }