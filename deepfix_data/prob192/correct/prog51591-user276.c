#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf ("%d",&n);
	for (i=1;i<=(n+1)/2;i++) {
	    for (j=1;j<=n;j++) {
	        if(j>=(n+1)/2-(i-1)&&j<=(n+1)/2+(i-1))
	        {printf ("*");}
	        else printf (" ");
	    } printf ("\n"); }
	for (i=(n+1)/2+1;i<=n;i++) {
	    for (j=1;j<=n;j++) {
	        if (j>=(n+1)/2-(n-i)&&j<=(n+1)/2+(n-i))
	        {printf ("*");}
	        else printf (" ");
	    }printf ("\n"); }
	return 0; }