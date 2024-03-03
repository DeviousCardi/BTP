#include <stdio.h>
#include <stdlib.h>
int main() {
	int s,t;
	scanf("%d",&s);
	scanf("%d",&t);
	int a[s],b[t];
	int i,j,k;
	for(i=0;i<s;i++) {
	    scanf("%1d",&a[i]); }
	for(i=0;i<t;i++) {
	    scanf("%1d",&b[i]); }
	int d=((s>t)?:(s+2),(t+2));
int c[d];
	for(i=s+1;i>=0;i--) {
	    for(j=s;j>=0;j--)
	    break;
	    for(k=t;k>=0;k--)
	    break; }
printf("%d",a[2]);
	return 0; }