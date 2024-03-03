#include <stdio.h>
int main() {
	int m,n;
	scanf("%d\n",&m);
	int array1[m];
	for(m=0;m>=0;m++) {
	    scanf("%d ",&array1[m]); }
	scanf("%d\n",&n);
	int array2[n];
	for(n=0;n>=0;n++) {
	    scanf("%d ",&array2[n]); }
	printf("%d",array2[n-1]);
	return 0; }