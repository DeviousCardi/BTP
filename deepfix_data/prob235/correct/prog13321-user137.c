#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,l,j,k,m,height;
	scanf ("%d", &height);
	for (i=1; i<=height; i=i+1){
	    if (i<=(height+1)/2){
	for (k=1; k<=(height+1)/2-i; k=k+1){
	    printf(" "); }
	for (j=1; j<=2*i-1; j=j+1){
	    printf ("%d", (j+(height+1)/2-i)%10); } }
	else{
	    for (k=1; k<=(i-(height+1)/2); k=k+1){
	        printf (" "); }
	    m=(i-(height+1)/2)+1;
	   for (j=1; j<=(height-i)*2+1; j=j+1){
	       printf ("%d", m%10);
	       	     m=m+1; } }
	printf ("\n"); }
	return 0; }