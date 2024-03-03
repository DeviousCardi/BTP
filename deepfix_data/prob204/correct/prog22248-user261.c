#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int ns=n,a=0,s=0;
	while(ns!=0) {
	    a=ns%10;
	    s=s*10+a;
	    ns=ns/10; }
	if(s==n)
	printf("Yes");
	else
	printf("No");
	return 0; }