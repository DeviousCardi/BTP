#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,x,y;
	scanf("%d",&n);
	for(x=1;x<=((n+1)/2);x++){
	    for(y=1;y<=x;y++)
	    printf("%c",'*');
	    printf(" ");
	    printf("\n");}
	for(x=1;x<=((n+1)/2);x++){
	    for(y=n;y<=x;y--)
	    printf("%c",'*');
	    printf(" ");
	    printf("\n");}
	return 0; }