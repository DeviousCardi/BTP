#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,sum=0;
	scanf ("%d",&n);
	for (i=1;i<n;i++){
	    if (n%i==0 && i!=n){
	    sum=sum+i;
	    i++
	    if (n==sum){
	        printf ("YES"); }
	    else printf ("NO");
	    break;
	}}
	return 0; }