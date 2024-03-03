#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,count;
	scanf("%d",&n);
	int i=0;
	int a[9999];
	while (n>0) {
	     a[i]=(n%10);
	      n=n/10;
	      i=i+1;
	      count++; }
	if(n==m)
	printf("Yes");
	else
	printf("No");
	return 0; }