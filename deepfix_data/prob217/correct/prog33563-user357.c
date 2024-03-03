#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int array[10000];
	int n,i,j,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&array[i]); }
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	        scanf("%d",&array[j]);
	        j++;
	sum=(array[i]+ array[j]);
       sum++; } }
	return 0; }