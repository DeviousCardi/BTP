#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d", &n);
	if(i<=n) {
	    for(k=1;k<=((n+1)/2)-i;k++)
	    {printf(" ");}
	    for(j=1;j<=i;j++)
	    {if(j==1||j==i)
	    { printf("*");}
	    else{printf(" ");}
	    i++; }
	return 0; } }