#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	int p=(n+1)/2;
	  for(i=1;i<=p;i++) {
	    for(k=0;k<=(p-i);k++) {
	        printf(" "); }
	    printf("*");
	    if(i>1)
	    {for(k=0;k<(i-2);k++) {
	            printf(" "); }
	   printf("*");}
	   printf("\n"); }
	    for(i=1;i<p;i++) {
	    for(k=0;k<=i;k++) {
	        printf(" "); }
	    printf("*");
	   printf("\n"); }
	return 0; }