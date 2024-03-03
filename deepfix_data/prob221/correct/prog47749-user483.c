#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,j;
	scanf ("%d",&a);
	for (i=1;i<=a;i=i+1) {
	    for (j=1;j<=2*a-1;j=j+1)  {
	    if (i<j)
	    printf ("*");
	    else  {
	    if (j<i)         {
	    printf ("*"); } } } }
	    printf ("\n");
	    return 0; }