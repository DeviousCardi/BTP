#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d", &n);
	int i, j;
	for(i=1; i<=n; i++){
	   for(j=1; <=(2*i-1); j++);
	   if(j>=(n-(i-1))&&j<=(n+(i-1))){
	       printf("%d", j); }
	   else{
	       printf(" "); } }
	   printf("\n"); }
	return 0; }