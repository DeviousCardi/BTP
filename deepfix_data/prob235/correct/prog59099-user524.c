#include <stdio.h>
#include <stdlib.h>
int main() {
		int i,j,h;
	scanf("%d",&h);
	for(i=1;i<=(h+1)/2;i=i+1) {
	    for(j=1;j<=i;j=j+1)
	    printf("%d\n",(i+1)/2); }
	return 0; }