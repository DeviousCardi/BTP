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
	        scanf("%d",&ind[i]); }
	for(i=0;i<test;i++) {
	      if(num[ind[i]]>num[ind[i-1]] && num[ind[i]]>num[ind[i+1]])
	        printf("Yes\n");
	      else
	        printf("No\n"); }
	return 0; }