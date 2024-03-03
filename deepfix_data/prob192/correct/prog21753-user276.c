#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf ("%d",&n);
	for (i=1;i<=(n+1)/2;i++) {
	    for (j=1;j<=n;j++) {
	        if(j>=(n+1)/2-(i-1)&&j<=(n+1)/2+(i-1))
	        {printf ("*");}
	        else
	        continue;
	    } printf ("\n"); }
	for (i=(n+1)/2+1;i<=n;i++) {
	    for (j=1;j<=n;j++) {
	        if (j>=(n+1)/2-(n-i)&&j<=(n+1)/2+(n-i))
	        {printf ("*");}
	        else
	        continue;
	    }printf ("\n"); }
	return 0; }