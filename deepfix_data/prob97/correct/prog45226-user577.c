#include <stdio.h>
#include <stdlib.h>
int main() {
	int numbers,n;
	scanf("%d",&n);
	int spaces=n-1;
	int lines=1;
	for (lines=1; lines<=n; lines=lines++) {
	    for (spaces=n-1; spaces>=0; spaces--) {
	        printf(" "); }
	    for(numbers=n%10-(lines-1); numbers<=n%10+(lines-1); numbers++) {
	        printf("%d",numbers); }
	    printf("\n"); }
	return 0; }