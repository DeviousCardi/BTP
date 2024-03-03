#include <stdio.h>
int main() {
	int n, var, test = 0;
	scanf("%d", &n);
	int a[n];
	for ( int i = 0; i < n; i++) {
	    scanf("%d", &a[i]); }
	for ( int i = 0; i < n; i++) {
	    printf("%d", a[i]); }
	for ( int i = 0; i < n; i++) {
	    var = a[i];
	    for ( int j = i; j < n; j++) {
	        if( a[j] == var) {
	            test++;
	            break; } } }
    (test == 0) ? printf("YES\n"):printf("NO\n");
	return 0; }