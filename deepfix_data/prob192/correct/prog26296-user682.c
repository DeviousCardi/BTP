#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf ("%d",&n);
	for (i=1;i<=n;i++){
	    for (j=(n%2);j<=(n%2+i);j++){
	    printf ("*"); }
	printf ("*\n"); }
	return 0; }