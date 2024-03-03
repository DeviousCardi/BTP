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
	    if(ar1[i]>0 && ar1[i]<n) {
	    if((ar[ar1[i]]>ar[ar1[i]-1])&&(ar[ar1[i]]>ar[ar1[i]+1]))
	    printf("Yes \n"); }
	    else if {
	    if(ar1[i]==0 && ar[0]>ar[1] && l>1)
	    printf("Yes \n");
	    else if(ar1[i]==l-1 && ar[l-1]>ar[l-2] && l>2)
	    printf("Yes \n"); }
	    else
	    printf("No \n"); }
	return 0; }