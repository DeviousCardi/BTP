#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n;
	scanf("%d", &n);
	int i, j;
	int k, l, m;
	k= (2*n)-1;
	l= n-(i-1);
	m= n+(i-1);
	for(i=1; i<=n; i++){
	   for(j=1; j<=k; j++){
	   if(j>=l && j<=m){
	       printf("%d", j); }
	   else{
	       printf(" "); } }
	   printf("\n"); }
	return 0; }