#include<stdio.h>
int sum(int n,int a[]) {
    if(n-1>=0)
    return sum(n-1,a)+a[n-1]; }
int main() {
    int n;
    scanf("%d",&n);
    int a[1000000];
    for(int i=0;i<n;i++)
    scanf("%d",&a[n]);
    int s=sum(n,a);
    printf("%d",s);
    return 0; }