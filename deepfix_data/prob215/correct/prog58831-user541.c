#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i=1,sum=0;
	scanf ("%d",&n);
	if (n%i==0){
	for (i=1;i<n;i++){
	    sum=sum+i;
	    if (n==sum){
	        printf ("YES"); }
	    else printf ("NO");
	    break;
	}}
	return 0; }