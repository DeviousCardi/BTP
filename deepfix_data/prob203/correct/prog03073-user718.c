#include <stdio.h>
int main() {
	int n, var, test = 0;
	scanf("%d", &n);
	int a[n];
	for ( int i = 0; i < n; i++) {
	    scanf("%d", &a[i]); }
	for ( int i = 0; i < n; i++) {
	    var = a[i];
	    for ( int j = i; j < n; j++) {
	        if( a[j] == var) {
	            test++;
                printf("%d  %d  %d\n", var, j, test); } } }
    (test == 0) ? printf("YES\n"):printf("NO\n");
	return 0; }