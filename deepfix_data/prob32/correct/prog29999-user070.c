#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t;
	scanf("%d\n",&n);
	int minarr[n];
	for(i=0;i<n;i++)
	{scanf("%d\n",&t);
	    minarr[i]=t; }
	int val,low,high;
	for(i=1;i<n-1;i++) {
	    val=minarr[i];
	    low=minarr[i-1];
	    high=minarr[i+1];
	    if(low>val&&high>val) {
	        printf("yes");break; } }
	return 0; }