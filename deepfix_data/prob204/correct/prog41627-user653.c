#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,rev=0;
	int rem;
	scanf("%ld",&n);
	long int temp=n;
	while(temp!=0) {
	    rem=temp%10;
	    temp=(temp-rem)/10;
	    rev=rev*10+rem; }
	if(rev==n)
	    printf("YES");
	else
	    printf("NO");
	return 0; }