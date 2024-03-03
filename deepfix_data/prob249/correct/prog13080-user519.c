#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, space,i,k;
    scanf("%d",&n);
    space = n/2;
	for(i=1; i<= space;i++)
	printf(" ");
	for(k=1; k<=i;k++)
	printf("*");
	space--;
	return 0; }