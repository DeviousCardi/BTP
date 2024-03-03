#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=(n+1)/2;i++) {
	    for(j=1;j<=(((n+1)/2)-1);j++) {
	        if(j<((n+1)/2-i))
	        printf("%c",' ');
	        else
	        printf("%d",j); }
	    printf("\n"); }
	return 0; }