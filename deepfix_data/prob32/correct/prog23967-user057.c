#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int x[n],i;
	for(i=0;i<n;i++) {
	    scanf("%d",&x[i]); }
	for(i=0;i<n;i++) {
	    if(i==0) {
	        if(x[0]<x[1])
	        printf("Yes"); }
	    if(i==(n-1)) {
	        if(x[n-1]<x[n-2])
	        printf("Yes"); }
	    if(x[i]<x[i-1]&& x[i]<x[i+1])
	   { printf("Yes");
           goto eop;} }
	printf("No");
	eop:
	return 0; }