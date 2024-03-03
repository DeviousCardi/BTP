#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if(x<=y)
	{   if(y<=z)
	    printf("%d",y);
	    else if(x<=z)
	    printf("%d",z);
	    else
	    printf("%d",x); }
	else
	{   if(y>=z)
	    printf("%d",y);
	    else if(x>=z)
	    printf("%d",z);
	    else
	    printf("%d",x);
	return 0; }