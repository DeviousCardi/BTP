#include <stdio.h>
int main() {
	int d, n;
	scanf("%d%d", &d, &n);
	int b[d];
	int a[n+1];
	for(int i = 0; i < d; i++) {
	    scanf("%d", &b[i]);
	    a[i] = b[i]; }
	for(int i = 0; i < d; i++)
	    printf("%d  %d\n", i,b[i]);
	printf("\n");
	for(int i = d; i < n; i++) {
	    int sum = 0;
	    int i = 0;
	    do {
	        sum = sum + a[i];
	        i++; }
	    while(i < d); }
	for(int i = 0; i <= n; i++)
	    printf("%d  %d\n", i,a[i]);
	printf("%d", a[n-1]);
	return 0; }