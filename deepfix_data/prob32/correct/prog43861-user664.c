#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	int a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	    if((a[i]>a[i+1])&&(a[i+1]<a[i+2]))
	  {  printf("YES");} }
	return 0; }