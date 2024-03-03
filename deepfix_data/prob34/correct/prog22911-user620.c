#include <stdio.h>
#include <stdlib.h>
int main() {
	int  size,i;
	scanf("%d",&size);
	int num[size];
	for(i=0;i<size;i++)
	    scanf("%d",&num[i]);
	int test;
	scanf("%d",&test);
	int ind[test];
	for(i=0;i<test;i++) {
	        scanf("%d",&ind[i]);
	    if(ind[i]>ind[i-1] && ind[i]>ind[i+1])
	        printf("Yes");
	    else
	        printf("No"); }
	return 0; }