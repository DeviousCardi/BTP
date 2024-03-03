#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int b,i,n,a[10000];
	scanf ("%d%d",&b,&n);
	for (i=0;i<n;i++){
	    a[i]=( int b) % (int pow(10,i));
	    if (a[i]==a[0]){
	        printf ("YES"); }
	    else printf ("NO"); }
	return 0; }