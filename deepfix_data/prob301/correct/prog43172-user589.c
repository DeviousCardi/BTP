#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i;
	long long int arr[100000];
	scanf("%d\n", n);
	for(i=0; i<n; i++) {
	    scanf("%lld ", arr[i]); }
	if(i%2 == 0) {
	    printf("%lld", arr[(i+2)/2]); }
	else
	    printf("%lld", arr[(i+1)/2]);
	return 0; }