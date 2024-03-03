#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	    	  if(x>z)
	    	  if(y>=z)
	      printf("%d",y);
	  else
	      printf("%d",z);
	else
	if(x==z)
	    printf("%d",y);
	else
	    printf("%d",x);
	    else
	    if(x==y)
	    if(x>z)
	    printf("%d",z);
	    else
	    printf("%d",x);
	    else
	    if(x<z)
	    if(y<z)
	    printf("%d",y);
	    else
	    printf("%d",z);
	    if(x>z)
	    printf("%d",x);
	    if(z>y)
	    printf("%d",y);
	return 0; }