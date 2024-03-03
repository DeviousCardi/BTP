#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) {
	    scanf("%d", &a[i]); }
	int done=0;
	for (int i=0; i<n; i++) {
	    int j;
	    for (j= i+1; j<n; j++) {
	        if (a[i]== a[j]) {
	            printf("YES");
	            done++;
	            break; } }
	    if (done==1) break; }
	if (done==0) printf("NO");
	return 0; }