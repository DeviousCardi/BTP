#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,s=0;
	scanf("%d",&n);
	for(i=1;i<((n/2)+1));i++) {
	    if((n%i)==0) {
	        s=s+i; } }
	if(s==n) {
	    printf("Yes"); }
	else {
	    printf("No"); }
	return 0; }