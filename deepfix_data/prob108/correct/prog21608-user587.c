#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,x,y;
	scanf("%d",&n);
	for(x=1;x<=((n+1)/2);x++) {
	    for(y=1;y<=x;y++)
	    if((y==1)||(y==x))
	    printf("%c",'*');
	    else if((y>1)&&(y<x))
	    printf(" ");
	    printf("\n"); }
    for(x=((n+1)/2)-1;x>=1;x--) {
	    for(y=x;y>=1;y--)
	    if((y==1)||(y==x))
	    printf("%c",'*');
	    else if((y>1)&&(y<x))
	    printf(" ");
	    printf("\n"); }
	return 0; }