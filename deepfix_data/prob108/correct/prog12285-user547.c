#include <stdio.h>
#include <stdlib.h>
int main() {
	int n; int i; int j;
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
	    for (j=1;j<=i;j++) {
	        if (j==1||j==i) {
	            printf("*"); }
	        else {
	            printf(" "); } } }
	return 0; }