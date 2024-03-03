#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n],in[n];
	int i,j,count=0;
	for (i=0;i<n;i++)
	  scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	  in[i]=0;
	for (i=0;i<n;i++) {
	    for (j=0;j<n;j++) {
	        if (i<j && a[i]>a[j]) {
	             count=count+1;
	             in[i]=in[i]+0; } } }
	  printf("%d\n",count);
	  for (i=0;i<n;i++)
	    printf("%d ",in[i]);
	return 0; }