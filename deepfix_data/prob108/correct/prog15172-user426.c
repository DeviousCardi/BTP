#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=1,j=1,h;
	scanf("%d",&h);
	for(i=1;i<=h;i++){
	    printf("*");
	    for(j=1;j<=i;j++){
	       if(i<(h/2+1))
	          if(j<i)
	          printf(" ");
	          else
	          printf("*"); }
	    printf("\n"); }
	return 0; }