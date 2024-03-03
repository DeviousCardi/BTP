#include <stdio.h>
#include <stdlib.h>
int main() {
	int u,v,w;
	scanf("%d%d%d",&u,&v,&w);
	if((u*u+v*v)==w*w)
	{printf("right angle"); }
	else
	     if((u*u+v*v)<(w*w)){
        	printf("cannot form triangle");}
	    else
	     printf("noy right angled triangle");
	return 0; }