#include<stdio.h>
int sum(int a[],int n);
int main() {
   int n;
   scanf("%d",&n);
  int i,a[10000];
  for(i=0;i<n;i++) {
  scanf("%d",&a[i]); }
    printf("%d\n",sum(a[i],n)); }
int sum(int a[],int n) {
    int i;
    int sum =0;
    for(i=0;i<n;i++)
    sum=sum+a[i];
    return sum; }