#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,s;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&ar[i]); }
	scanf("%d",&s);
	for(i=0;i<n;i++) {
	    for(j=(i+1);j<n;j++) {
	        if((ar[i]+ar[j])==s) {
	        printf("(%d,%d)",ar[i],ar[j]); } }
	        printf("\n"); }
	return 0; }