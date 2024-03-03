#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t;
	scanf("%d\n",&n);
	int minarr[n];
	for(i=0;i<n;i++)
	{scanf("%d\n",&t);
	    minarr[i]=t; }
	int val,low,high,f=0,k=0;
	for(i=0;i<n;i++) {
	    if(i==0&&minarr[i]<minarr[i+1])
	    k=1;
	   else if(i==n-1&&minarr[i]<minarr[i-1])
	        k=1;
	    else {
	    val=minarr[i];
	    low=minarr[i-1];
	    high=minarr[i+1];
	    if((low>val&&high>val)||k==1) {
	        printf("Yes");f=1;break;
	    }} }
	if(f!=1) {
	   	printf("No"); }
	return 0; }