#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i;
	long long int arr[n], count = 0;
	scanf("%d\n", n);
	for(i=0; i<n; i++) {
	    scanf("%lld ", arr[i]); }
	for(j=0; j<i; j++) {
	    if(arr[j] == arr[j+1])
	    count = count + 1; continue;
	    else
	    break; }
	printf("%lld", arr[count]);
	return 0; }