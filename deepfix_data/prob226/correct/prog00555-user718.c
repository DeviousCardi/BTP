#include <stdio.h>
int main() {
	int d, n;
	scanf("%d%d", &n, &d);
	int a[n];
	for(int i = 0; i < n; i++)
	    scanf("%d", &a[i]);
	for(int i = 0; i < n; i++)
	    printf("%d  %d\n", i,a[i]);
	int sum = 0;
	printf("\n");
	for( int i = n - 1; i >= n-d-1; i--) {
	    sum = sum + a[i];
	    printf("%d\n", sum); }
	printf("%d", sum);
	return 0; }