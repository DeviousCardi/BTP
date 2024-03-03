#include <stdio.h>
#include <stdlib.h>
int fibonacci(int num[], int n) {
   if(n==0){printf("0");}
   if(n==1){printf("1");return 1;}
   printf("%d",fibonacci( num, n));
   return (n + fibonacci( num, n)); }
int main() {
	int i,t;
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++) {
	    scanf("%d", &a[i]); }
	return 0; }