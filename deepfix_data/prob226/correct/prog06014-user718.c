#include <stdio.h>
int main() {
	int d, n;
	scanf("%d%d", &n, &d);
	int a[n];
	for(int i = 0; i < n; i++)
	    scanf("%d", &a[i]);
	int sum = 0;
	for( int i = 0; i < d; i++) {
	    sum = sum + a[i];
	    printf("%d\n", sum); }
	printf("%d", sum);
	return 0; }