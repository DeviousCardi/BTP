#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	if (x<=y) {
	    if(y<=z)
	    printf("%d",y);
	    else if(x>=z)
	    printf("%d",x);
	    else if(z>=x)
	    printf("%d",z); }
	else {
	    if(y>=z)
	    printf("%d",y);
	    else if(x<=z)
	    printf("%d",x);
	    else if(z<=x)
	    printf("%d",z); }
	return 0; }