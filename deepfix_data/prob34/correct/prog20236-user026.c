#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,l,n;
	scanf("%d\n",&l);
	int ar[l];
	for(i=0;i<l;i++) {
	    scanf("%d\n",&ar[i]); }
	scanf("%d\n",&n);
	int ar1[n];
	for(i=0;i<n;i++) {
	    scanf("%d\n",&ar1[i]); }
	for(i=0;i<n;i++) {
	    if((ar1[i]>0) && (ar1[i]<l-1)&&(ar[ar1[i]]>ar[ar1[i]-1])&&(ar[ar1[i]]>ar[ar1[i]+1]))
	    printf("Yes\n");
	    else if(l>1 && ar1[i]==0 && ar[0]>ar[1])
	    printf("Yes\n");
	    else if(l>1 && ar1[i]==(l-1)&& ar[l-1]>ar[l-2])
	    printf("Yes\n");
	    else
	    printf("No\n"); }
	return 0; }