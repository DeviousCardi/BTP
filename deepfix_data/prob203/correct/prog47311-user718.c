#include <stdio.h>
void read(int n, int a[]) {
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    return; }
int main() {
	int n, var, test = 0;
	scanf("%d", &n);
	int a[n];
	read(n, a);
	for ( int i = 0; i < n; i++) {
	    var = a[i];
	    for ( int j = i+1; j < n; j++) {
	        if( a[j] == var) {
	            test++;
	            break; } } }
    (test != 0) ? printf("YES\n"):printf("NO\n");
	return 0; }