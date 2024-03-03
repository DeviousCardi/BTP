#include <stdio.h>
#include <stdlib.h>
int main() {
	int s,t;
	scanf("%d",&s);
	scanf("%d",&t);
	int a[s],b[t];
	int i,j;
	for(i=0;i<s;i++) {
	    scanf("%1d",&a[i]); }
	for(i=0;i<s;i++) {
	    scanf("%1d",&b[i]); }
	printf("%d",a[2]);
	return 0; }