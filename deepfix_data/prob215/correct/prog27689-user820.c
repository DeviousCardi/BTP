#include <stdio.h>
#include <stdlib.h>
int main() {
	int n ,m;
	scanf("%d",&n);
	int c=0;
	for(m=0;m<n;m++) {
	if(n%m==0) {
	    c=c+m; } }
	if(c==n) {
	    printf("Yes"); }
	else {
	    printf("No"); }
	return 0; }