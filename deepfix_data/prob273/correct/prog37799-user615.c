#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	if(!(h%2==0)) {
	   int n,l;
	    n=(h+1)/2;
	    l=n;
	    for(i=0;i<n;i++) {
	        for(j=1;j<l;j++)
	      printf(" ");
	      for(k=n-i;k<=n;k++)
	      printf("%d",k);
	      l--;
	     printf("\n"); }
	l=n;k=0;
	for(i=1;i<l;i++)
	{ for(j=1;j<=i;j++) {
	    printf(" ");
	    for(k=i+1;k<=n;k++)
	    printf("%d",k);
	    printf("\n"); } } }
	return 0; }