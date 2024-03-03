#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[20], tc[20],i , t, n;
	scanf("%d", &n);
	for (i=0;i<n;i++)
	   scanf("%d", &a[i]);
	scanf("%d", &t);
	for (i=0;i<t;i++)
	   scanf("%d", &tc[i]);
	for (i=0;i<t;i++) {
	    if (tc[i]>0 && tc[i]<n-1) {
	        if ( a[tc[i]] < a[tc[i]+1] && a[tc[i]] < a[tc[i]-1])
	            printf("\nYes");
	        else
	            printf("\nNo"); }
	    else if (tc[i]==0 && a[tc[i]]<a[tc[i]+1])
	        printf("\nYes");
	    else if ((tc[i]==n-1) && a[tc[i]]<a[tc[i]-1])
	        printf("\nYes");
	    else
	        printf("\nNo"); }
	return 0; }