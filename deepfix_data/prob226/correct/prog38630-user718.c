#include <stdio.h>
int main() {
	int d, n;
	scanf("%d%d", &d, &n);
	int b[d];
	int a[n+1];
	for(int i = 0; i < d; i++) {
	    scanf("%d", &b[i]);
	    a[i] = b[i]; }
    int sum = 0;
    int j;
	for(int i = d; i < n; i++) {
	    sum = 0;
	    for( int j = 1; j <= d; j++) {
	        sum = sum + a[i-j]; }
	    a[i] = sum; }
	for(int i = 0; i <= n; i++)
	    printf("%d  %d\n", i,a[i]);
	printf("%d", a[n]);
	return 0; }