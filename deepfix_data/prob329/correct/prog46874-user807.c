#include <stdio.h>
#include <stdlib.h>
int main() {
	int u,v,w;
	scanf("%d%d%d",&u,&v,&w);
	if(u==0||v==0||w==0)
	   {printf("Cannot form a Triangle");}
	else
    	if((u*u+v*v)==w*w||(v*v+w*w)==u*u)
	      {printf("Right Triangle"); }
	   else
	      if((u*u+v*v)!=(w*w)&&((u+v)>w))
	         printf("Not Right Triangle");
	     if((u*u+v*v)<(w*w)&&((u+v)<=w)){
        	printf("Cannot form a Triangle");}
	return 0; }