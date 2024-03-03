#include<stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else return b; }
int MaxTill(int a[],int n)
{    int j;
    if(n==1)
    return 1;
    for(j=n-1;j>=1;j--)
    if(a[j-1]<a[n-1])
    return max(MaxTill(a,j),1); }
int main() {
   int i,n,a[20];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
    printf("%d",MaxTill(a,n)); }