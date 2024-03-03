#include <stdio.h>
int main() {
	int d, n;
	scanf("%d%d", &d, &n);
	int a[n];
	for(int i = 0; i < n; i++)
	    scanf("%d", &a[i]);
	int sum = 0;
	for( int i = n - 1; i > n-d-1; i--) {
	    sum = sum + a[i]; }
	printf("%d", sum);
	return 0; }