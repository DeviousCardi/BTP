#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d\n", &n);
	int p[n];
	int i;
	for (i=0;i<=n-1;i++)
	    scanf("%d\n", &p[i]);
	int t,j;
	    scanf("%d\n", &t);
	for (i=1;i<=t;i++) {
	        scanf ("%d", &j);
	        if (p[j]>p[j-1]&&p[j]>p[j-1])
	            printf("Yes");
	        else printf("No"); }
	return 0; }