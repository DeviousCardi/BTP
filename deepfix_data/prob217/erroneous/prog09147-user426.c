#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i=0,s,j=0;
	int ary[n];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&ary[i]); }
	scanf("%d",&s);
	for(i=0;i<n;i++){
	    for(j=i+1;j<n;j++){
	        if((i+j)==s)
	        printf("(%d,%d)",i,j);
	        else
	        printf("no") } }
	return 0; }