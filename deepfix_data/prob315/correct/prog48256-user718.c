#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, count = 0, sum = 0;
	scanf("%d", &n);
	int a[n],c[n];
	for( int i = 0; i < n; i++)
	    scanf("%d", &a[i]);
	for( int i = 0; i < n; i++)
	    c[i] = 0;
	for(int i = 0; i < n; i++) {
	    count = 0;
	    for(int j = i + 1; j < n; j++)
	    if( a[j] < a[i])
	        count++;
	    c[i] = count;
	    sum = sum + count; }
	printf("%d \n", sum);
	for( int i = 0; i < n; i++) {
	    printf("%d",c[i]);
	    if(i == n-1)
	        continue;
	    printf(" "); }
	return 0; }