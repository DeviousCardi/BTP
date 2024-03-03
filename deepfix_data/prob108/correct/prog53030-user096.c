#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,a;
	scanf ("%d",&a);
	for (i=1;i<=(a+1)/2-1;i++) {
	    if (i==1)
	    printf ("*");
	    else {
	        printf ("*");{
	       for (j=1;j<i;j++)
	       printf (" ");
	       printf ("*");} }
	printf ("\n");} {
	    if (i==a)
	printf ("*");
	else {
	    printf ("*");
	for (i=(a+1)/2-1;i>=1;i--)
    printf (" ");
	printf ("*"); } }
	printf ("\n");
	return 0; }