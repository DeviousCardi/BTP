#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,s,i;
	scanf("%d",&n);
	int input[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&input[i]); }
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{   int k;
	    for(k=i+1;k<n;k++) {
	        if((input[i]+input[k])==s) {
	            printf("(%d,%d)\n",input[i],input[k]); } } }
	return 0; }