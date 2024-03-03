#include <stdio.h>
#include <stdlib.h>
int j=1,c=0,o=0,a=0;
int catalan(int k) {
    if(c && o)
    j=j+2;
    else return 1;
    catalan(k-1); }
int main() {
	int t,i;
	scanf("%d",&t);
	int k[t];
	for(i=0;i<t;i++)
	scanf("%d",&k[i]);
	for(i=0;i<t;i++) {
	    c=k[i];
	    e=k[i];
	    if(checkcatalan(k[i])) {
	        printf("yes"); }
	    else
	    printf("no"); }
	return 0; }