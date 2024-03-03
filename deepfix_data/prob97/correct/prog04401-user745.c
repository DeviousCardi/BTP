#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n;
	scanf("%d", &n);
	int i, j;
	for(i=1; i<=n; i++){
	   for(j=1; j<=((2*n)-1); j++){
	   if(j>=(n-(i-1))&&j<=(n+(i-1))){
	       printf("%d", j); }
	   else{
	       printf(" "); } }
	   printf("\n"); }
	return 0; }