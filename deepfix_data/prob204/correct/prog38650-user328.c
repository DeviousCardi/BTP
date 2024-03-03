#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,p,nrev=0,r;
	scanf("%d",&n);
	p=n;
	while(n/10!=0) {
	    r=p%10;
	    nrev=(nrev*10)+r;
	    p=p/10; }
	if(nrev==p) {
	    printf("Yes"); }
	else {
	    printf("No"); }
	return 0; }