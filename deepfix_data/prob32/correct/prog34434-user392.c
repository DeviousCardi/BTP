#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i,n;
	scanf("%d",&n);
	int k[n];
	for(i=0;i<n;i++){
	    scanf("%d",&k[i]); }
	for(i=1;i<n-1;i++)
	if((k[i]<k[i+1]) && (k[i]>k[i-1])) {
	    printf("Yes\n"); }
	else{
	    printf("No\n"); }
	return 0; }