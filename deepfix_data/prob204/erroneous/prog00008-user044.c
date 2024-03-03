#include <stdio.h>
#include <stdlib.h>
int main() {
	long n;
	long cop;
	long final=0;
	int rem;
	scanf("%ld",&n);
	cop=n;
	while(cop>0) {
	    rem=cop%10;
	    final=rem+fianl*10;
	    cop=cop/10; }
	if(final==n)
	printf("YES");
	else
	print("NO");
	return 0; }