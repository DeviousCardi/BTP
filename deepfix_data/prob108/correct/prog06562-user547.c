#include <stdio.h>
#include <stdlib.h>
int main() {
	int n; int i; int j;
	scanf("%d",&n);
	int a = (n+1)/2;
	for (i=1;i<=n;i++) {
	    int p = ((a-i)>0) ? a-i:i-a;
	    for (j=1;j<=(a-p);j++) {
	        if (j==1||j==p) {
	            printf("*"); }
	        else {
	            printf(" "); } }
	printf("\n"); }
	return 0; }