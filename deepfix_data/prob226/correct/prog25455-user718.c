#include <stdio.h>
int main() {
	int d, n;
	scanf("%d%d", &n, &d);
	int a[n];
	for(int i = 0; i < n; i++)
	    scanf("%d", &a[i]);
	int sum = 0;
	int i = 0;
	do {
	    sum = sum + a[i];
	    i++; }
	while(i < d);
	printf("%d", sum);
	return 0; }