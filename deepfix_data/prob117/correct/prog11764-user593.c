#include <stdio.h>
#include <stdlib.h>
int han(int t) {
	if(t=1)
	return 1;
	if(t>1)
	return 2*(han(t-1))+1;}
int main() {
    int val,t,i,n,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k);
	val=2*han(t-1)+1;
	if(k=val)
	printf("yes\n");}
	return 0; }