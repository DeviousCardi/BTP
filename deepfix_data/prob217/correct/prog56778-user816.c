#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,s,n;
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i=i+1)
	 scanf("%d",&array[i]);
	scanf("%d",&s);
	for(i=0;i<n;i=i+1) {
	    for(j=1;j<n;j=j+1) {
	        if(array[i]+array[j]==s)
	        printf("%d%d",array[i],array[j]); } }
	return 0; }