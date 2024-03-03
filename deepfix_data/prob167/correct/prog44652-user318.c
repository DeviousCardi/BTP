#include<stdio.h>
int sum(int n,int a[]) {
    printf("%d",n);
   return sum(n-1,a)+a[n-1]; }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int k=sum(n,a);
    printf("%d",k);
    return 0; }