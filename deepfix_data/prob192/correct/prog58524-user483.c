#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,j;
	scanf ("%d",&a);
	for (i=1;i<=a;i=i+1) {
	    for (j=1;j<=a;j=j+1) {
	            if (i<=(a+1)/2) {
	                if (j>((a+1)/2)-i && j<= a-(((a+1)/2)-i) )
	                printf ("*");
	                else
	                printf (" "); }
	            else {
	            if (j>(a-(i+3)) && j<=(a-((a+1)/2)-(i-4)))
	            printf ("*");
	            else
	            printf (" ");
    	        }; }
	        printf ("\n"); }
return 0; }