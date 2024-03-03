#include <stdio.h>
#include <stdlib.h>
int fibonacci(int num[100], int n) {
   if(n==1){printf("0");}
   if(n==2){printf("1");return 1;}
   if(n>2) {
       num[n]=num[n-1]+num[n-2]; }
   return ( fibonacci( num, n+1)); }
int main() {
	int i,t,k;
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++) {
	    scanf("%d", &a[i]);
	   k = fibonacci( a, a[i]);
	   printf("%d",k); }
	return 0; }