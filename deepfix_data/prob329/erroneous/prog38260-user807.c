#include <stdio.h>
#include <stdlib.h>
int main() {
	int u,v,w;
	scanf("%d%d%d",&u,&v,&w);
	if((u*u+v*v)==w*w)
	{printf("Right Triangle"); }
	else
	     if((u*u+v*v)<(w*w)){
        	printf("cannot form a Triangle");}
	    else if((u*u+v*v)!==w*w))
	     printf("Not Right Triangle");
	return 0; }