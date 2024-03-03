#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d\n", &n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	    scanf("%d", &a[i]);
	int s;
	scanf("%d", &s);
	int j;
	for(i=0;i<n-1;i++) {
	    for (j=i+1;j<n;j++) {
            if ((a[i]+a[j])==s)
                printf("(%d,%d)\n",a[i] a[j]); } }
	return 0; }