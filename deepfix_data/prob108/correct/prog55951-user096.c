#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,a;
	scanf ("%d",&a);
	for (i=1;i<=a;i++) {
	    for (j=1;j<=a-i ;j++)
	    printf (" ");} {
	    if (i==1||i==a)
	    printf ("*");
	    else {
	        printf ("**"); } }
	return 0; }