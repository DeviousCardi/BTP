#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	scanf("%d",&h);
	int i,j,k,l;
	for(i=1;i<=h;i++) {
	   if(i<h/2)
	     for(j=i;j<(h+1)/2;j++) {
	         printf(" "); }
	  else
	     for(k=1;k<=i-(h+1)/2;k++) {
	         printf(" "); }
	    for(l=(h+1)/2-i+1;l<=(h+1)/2+i-1;h++) {
	        printf("%d",l); } }
	return 0; }