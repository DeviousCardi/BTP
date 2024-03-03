#include<stdio.h>
int sum(int n,int x[]) {
  int sum=0;
  if(n==0)
  return 0;
  if(n>1) {
  sum=x[n-1]+sum(n-1,x[]);
  return sum; }
  if(n==1)
  return x[0]; }
int main() {
    int sigma;
    int n,a[1000000],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sigma=sum(n,a[])
    return 0; }