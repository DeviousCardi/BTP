#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i=0,j=0,s;
	int ary[n];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&ary[i]); }
	scanf("%d\n",&s);
    for(i=0;i<n;i++){
	    for(j=i+1;j<n;j++){
	        printf("(%d,%d)\n",ary[i],ary[j]); } }
	return 0; }