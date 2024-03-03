#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,t,n,j;
	int a[20];
	scanf("%d",&n);
    	for(i=0;i<n;i++)
     {	  scanf("%d\n",&a[i]);} {
    	    scanf("%d",&t); }
	    for(i=0;i<t;i++) {
	      scanf("%d",&j);
    	if((a[j] > a[j-1]) &&( a[j] > a[j+1]))
	    printf("\nYes");
	    else {
    	    printf("\nNo"); } }
	return 0; }