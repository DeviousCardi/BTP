#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	int k[n];
	for(i=0;i<n;i++){
	    scanf("%d",&k[i]); }
	if(k[i]<k[n+i+1]){
	    printf("Yes\n"); }
	else{
	    printf("No\n"); }
	return 0; }