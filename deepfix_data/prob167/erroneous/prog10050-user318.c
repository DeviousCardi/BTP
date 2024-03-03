#include<stdio.h>
int sum(int a[],int n) {
   return sum(a[],n-1)+a[n-1]; }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    k=sum(a,n);
    printf("%d",k);
    return 0; }