#include <stdio.h>
#include <stdlib.h>
int main() {
    	int i,j,h;
	scanf("%d",&h);
	for(i=1;i<=h/2+1;i=i+1) {
	    for(j=0;j<=(h/2)-i;j++)
	    printf(" ");
	    for(j=0;j<i;j=j+1)
	    printf("%d",(h/2-i+2+j)%10);
	    printf("\n"); }
	for(i=1;i<=h/2;i++) {
	    for(j=1;j<=i;j=j+1)
	    printf(" ");
	  for(j=i-1;j<h/2;j=j+1)
	    printf("%d",(i+1+j)%10);
	      printf("\n"); }
	return 0; }