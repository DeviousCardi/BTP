#include<stdio.h>
int product(int a[],int start,int end);
long int prod=1;
int main() {
  int n;;
  long int k;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++) {
      scanf("%d ",&a[i]); }
  k=product(a,0,n-1);
  printf("%ld",k);
  return 0; }
int product(int a[],int start,int end) {
    prod=prod*a[start];
    if(start==end)
    return prod;
    else {
    return product(a,start+1,end); } }