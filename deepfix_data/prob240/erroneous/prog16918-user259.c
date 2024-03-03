#include <stdio.h>
#include <stdlib.h>
int valid_brackets(int);
int main() {
	int t,k,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d",&k);
	    printf(valid_brackets(k)); }
	return 0; }
int valid_brackets(int n) {
    if(n==0)
    return 1;
    return () }