#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,j;
	scanf ("%d",&a);
	for (i=1;i<=a;i=i+1) {
	    for (j=1;j<=2*a-1;j=j+1)  {
	        if (i!=a) { if (i==1)
	            printf ("*");
	            else {
	                if ((j<=a+(i+2))) {
	            printf ("*\n");
	        } } }
	    else
	    { if (j==a)
	    printf (" ");
	    }  } }
  printf ("\n");
	    return 0; }