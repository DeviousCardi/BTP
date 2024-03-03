#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,y,z,p,q;
	scanf("%d%",&p);
	scanf("%d",&q);
	for (x=1;x<=p;x++){
	    y=x;
	    for(z=1;z<=x;z++)
	        printf(" ");
	        for(z=1;z<=q+2-(2*1);z++)
	        printf("%d",y%10);
	        printf("/n"); }
	return 0; }