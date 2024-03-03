#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf ("%d",&n);
	int i,j;
	for (i=1;i<=(n+1)/2;i++) {
	    for (j=1;j<=(n+1)/2;j++) {
	    if (j<=((n+1)/2)-i)
	 printf (" ");
	    else if((j==(n+1)/2)||(j==(((n+1)/2)-i+1)))
	    {printf ("*");}
	    else {printf (" ");} }
	    	printf ("\n"); }
		for (i=((n+3)/2);i<=n;i++) {
	    for (j=((n+3)/2);j<=n+1;j++) {
	    if (j<=i)
	 printf (" ");
	    else if(j==n||j==i+1)
	    {printf ("*");}
	    else {printf (" ");} }
	    	printf ("\n"); }
	return 0; }