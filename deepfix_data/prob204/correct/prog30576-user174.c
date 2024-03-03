#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int num=n;
	int rem,rev;
	while(n!=0) {
	    rem=n%10;
	    rev=rev*10+rem;
	    n=n/10; }
	if (rev==num)
	{printf("YES"); }
	else
    {	printf("NO"); }
	return 0; }