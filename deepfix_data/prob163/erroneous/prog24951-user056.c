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
	int d=(s>t)?:(s+2):(t+2);
	for(i=s+1;i>=0;i--) {
	    c[i]=a[i]+b[i]; }
	for(i=0;i<d;i++) {
	    printf("%d",c[i]); }
	return 0; }