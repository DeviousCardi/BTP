#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,k,j;
	scanf ("%d",&n);
	k=0;
	int a[150];
	if (n<0) printf ("invalid"); else {
	    a[0]=1;
	    for (i=2;i<n;i++) {
	        if (n%i==0) {
	            k++; a[k]=i;
	        }else continue; printf ("%d\n",a[k]); }
	    j=0;
	    for (i=1;i<k;i++){
	        j=j+a[k];
	    } printf ("%d\n",j); }
	return 0;}