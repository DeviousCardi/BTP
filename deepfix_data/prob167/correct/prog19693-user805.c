#include<stdio.h>
int sum(int n,int a[],int start) {
    int b=0;
    b=b+a[start];
    if(start==n-1)
    return b;
    else
    return sum(n,a,start+1); }
int main() {
    int n,i,b;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    b=sum(n,a,0);
    printf("%d",b);
    return 0; }