#include <stdio.h>
#include <stdlib.h>
int main() {
	int  size,i,test,j,count=0;
	scanf("%d",&size);
	int num[size];
	for(i=0;i<size;i++)
	    scanf("%d",&num[i]);
	scanf("%d",&test);
	int ind[test];
	for(i=0;i<test;i++)
	    scanf("%d",&ind[i]);
	for(i=0;i<test;i++) {
	    for(j=0;j<size;j++) {
	        if( num[ ind[i] ]<num[ ind[j] ])
	           count++; }
	    if(count>=1) printf("No\n");
	    else printf("Yes\n"); }
	return 0; }