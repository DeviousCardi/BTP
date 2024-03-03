#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,l,n;
	scanf("%d",&l);
	int ar[l];
	for(i=0;i<l;i++) {
	    scanf("%d",&ar[i]); }
	scanf("%d",&n);
	int ar1[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&ar1[i]); }
	for(i=0;i<n;i++) {
	    if(i>0 && i<n) {
	    if(ar[ar1[i]]>ar[ar1[i]-1]&&ar[ar1[i]]>ar[ar1[i]+1])
	    printf("Yes "); }
	    else
	    printf("No "); }
	return 0; }