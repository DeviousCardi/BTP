#include <stdio.h>
int main() {
	int d, n;
	scanf("%d%d", &n, &d);
	int b[d];
	int a[n];
	for(int i = 0; i < n; i++)
	    scanf("%d", &b[i]);
	for(int i = d; i <= n; i++) {
	    int sum = 0;
	    int i = 0;
	    do {
	        sum = sum + a[i];
	        printf("%d  %d\n", a[i], sum);
	        i++; }
	    while(i < d);
	printf("%d", a[n]);
	return 0; }