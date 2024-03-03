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
    if(start==end)
    return prod;
    else {
        prod=prod*a[start]
    return product(a,start+1,end); } }