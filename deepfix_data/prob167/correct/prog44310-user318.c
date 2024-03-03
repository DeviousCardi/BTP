#include<stdio.h>
int sum(int n,int a[]) {
   if(n<=0)return 0;
   else
   return sum(n-1,a)+a[n-1]; }
int main() {
    long int n;
    scanf("%d",&n);
    long int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    long int k=sum(n,a);
    if(n>=2&&n<=100000) printf("%ld",k);
    return 0; }