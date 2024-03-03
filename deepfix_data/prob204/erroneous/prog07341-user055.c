#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m=0,count=0;
	scanf("%d",&n);
	int i=0;
	int a[9999];
	while (n>0) {
	     a[i]=(n%10);
	      n=n/10;
	      i=i+1;
	      count++; }
	for (j=0;j<count;j=j+1) {
	       m=m + a[j]*(pow(10,(count-1-j))) }
	if(n==m)
	printf("Yes");
	else
	printf("No");
	return 0; }