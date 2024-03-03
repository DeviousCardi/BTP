#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,j,k;
	scanf ("%d",&a);
	for (i=1;i<=a;i=i+1) {
	    for (j=1;j<=2*i-1;j=j+1) {
	        for (k=i;k<=2*j-1;k=k-1) {
	        printf ("*"); } {
	        printf ("\n");
	} } }
return 0; }