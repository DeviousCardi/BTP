#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, d,no, rev=0;
	scanf("%d", &n);
	no=n;
	while(n>0) {
	        d=n%10;
	        rev=rev+d*10;
	        n=n/10; }
	 if(no==sum)
	    printf("YES");
	 else
	    printf("NO");
	return 0; }