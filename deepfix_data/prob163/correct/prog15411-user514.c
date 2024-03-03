#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j;
	int a,b;
	int x[a],y[b];
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=1;i<a;i++) {
	  scanf("%d",&x[i]); }
	for(j=1;j<b;j++) {
	    scanf("%d",&y[j]); }
	int c;
	c=x[a]+y[b];
	printf("%d\n",c);
	return 0; }