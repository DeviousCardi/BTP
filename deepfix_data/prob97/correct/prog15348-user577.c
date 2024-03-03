#include <stdio.h>
#include <stdlib.h>
int main() {
	int numbers,n;
	scanf("%d",&n);
	int spaces=n-1;
	int lines=1;
	for (lines=1; lines<=n; lines=lines++) {
	    for (spaces=n-lines; spaces>=1; spaces--) {
	        printf(" "); }
	    for(numbers=n-(lines-1); numbers<=n+(lines-1); numbers++) {
	        printf("%d",numbers%10); }
	    printf("\n"); }
	return 0; }