#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if(x!=y &&y!=z) {
	if(x<y)
	{   if(y<z)
	    printf("%d",y);
	    else if(x<z)
	    printf("%d",z);
	    else
	    printf("%d",x); }
	else
	{   if(y>z)
	    printf("%d",y);
	    else if(x>x)
	    printf("%d",z);
	    else
	    printf("%d",x); } }
	else {
	if (x==y && y>z)
	printf("%d",z);
	else
	printf("%d",x);
	if(y==z && y>x)
	printf("%d",x);
	else
	printf("%d",y); }
	return 0; }