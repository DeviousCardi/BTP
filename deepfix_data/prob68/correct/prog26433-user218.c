#include<stdio.h>
int product(int a[],int start,int end);
int main() {
  int k,n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++) {
      scanf("%d ",&a[i]); }
  k=product(a,0,n-1);
  printf("%d",k);
  return 0; }
int product(int a[],int start,int end) {
    int prod=1;
    if(start==end)
    return prod;
    else {
    prod =prod *a[start]*product(a,start+1,end);
    return prod; } }