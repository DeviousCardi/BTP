#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k,l;
    scanf ("%d",&n);
    i=(n+1)/2;
    j=n;
	while(1) {
	   if(n==1)
	           printf("*");
	   printf("/n") ;
	   for(k=2;k<=i;k++) {
	       printf("*");
	       l=2;
	       while(k!=l) {
	           printf(" ");
	           l++; }
	       printf("* /n"); }
	   for(k=i;k<j;k++) {
	       printf("*");
	       l=i-3;
	       while(l!=0) {
	           printf(" ");
	           l--; }
	       printf("* /n"); }
	   printf("* /n");
        if(k==j) break; }
	return 0; }