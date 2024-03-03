#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,c=0;
    scanf("%d",&n);
	double a[n];
	for(i=0; i<n; i++) {
	    scanf("%lf",&a[i]); }
	if(n==1)
	printf("%d",a[0]);
	else {
	    for(j=0; j<n; j++) {
	        for(k=0; k<n; k++) {
	            if(a[k]==a[j])
	            c=c+1; } }
	return 0; }