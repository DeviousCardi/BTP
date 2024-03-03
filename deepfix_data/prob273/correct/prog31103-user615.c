#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	if(!(h%2==0)) {
	   int n;
	    n=(h+1)/2;
	    for(i=0;i<h;i++) {
	        for(j=1;j<n;j++)
	      printf(" ");
	      for(k=n-i;k<=n;k++)
	      printf("%d",k); } }
	return 0; }