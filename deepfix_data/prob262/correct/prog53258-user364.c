#include<stdio.h>
#include<strings.h>
int rev(long int a[],long int n,long int index) {
    if(index<0) {
        return -1; }
  printf("%ld ",a[index]);
  return rev(a,n,index-1); }
int main() {
   long int n;
   int i;
   long int a[100000000];
   scanf("%ld",&n);
   for(i=0;i<n;i++)
    scanf("%ld ",&a[i]);
    rev(a,n,n-1);
    return 0; }