#include <stdio.h>
#include <stdlib.h>
int fibonacci(int num[100], int n) {
  if(n!=0) {
   if(n==1){return 0;}
   if(n==2){return 1;}
   if(n>2) {
   return (fibonacci( num, n-2)+ fibonacci( num, n-1)); } }
  if(n==0)
  return 0; }
int main() {
	int i,t,k;
	scanf("%d",&t);
	int a[t];
	for(i=1;i<=t;i++) {
	    scanf("%d", &a[i]);
	   k = fibonacci( a, i);
	   printf("%d\n",k); }
	return 0; }