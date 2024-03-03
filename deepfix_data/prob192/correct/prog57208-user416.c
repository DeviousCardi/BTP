#include <stdio.h>
int main() {
	int n,c,k,space;
	scanf("%d",&n);
	space=(n-1)/2;
	for(k=1;k<=n/2;k++) {
	    for(c=1;c<=space;c++)
	    printf(" ");
	    space--;
	    for(c=1;c<=2*k-1;c++)
	    printf("*");
	    printf("\n"); }
	space=1;
	for(k=1;k<=(n-1)/2;k++)
	{for(c=2;c<=space;c++)
	printf(" ");
	space++;
	for(c=1;c<=(n-k)-1;c++)
	printf("*");
	printf("\n"); }
	return 0; }