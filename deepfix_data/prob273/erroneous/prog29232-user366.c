#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k;
	for(i=1;i<=5;i++) {
	    for(j=1;j<6-i;j++)
	    printf(" ");
	    for(k=6-i;k<=5;k++)
	    printf("%d",k%10);
	    printf("\n"); }
	for(x=1;x<=4;x++) {
	    for(y=1;y<=x;y++)
	    printf(" ");
	    for(z=(x+1);z<=5;z++)
	    printf("%d",z);
	    printf("\n"); }
	return 0; }