#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
	int i,j;
	int a,b;
	int x[a],y[b];
	scanf("%d\n",&a);
	scanf("%d\n",&b);
	for(i=0;i<n;i++) {
	  scanf("%d\n",&x[i]); }
	for(j=0;j<n;j++) {
	    scanf("%d\n",&y[j]); }
	int c;
	c=x[a]+y[b];
	printf("%d\n",c);
	return 0; }