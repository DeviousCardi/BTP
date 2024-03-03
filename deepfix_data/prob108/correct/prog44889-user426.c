#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=1,j=1,h;
	scanf("%d",&h);
	printf("*\n");
	h=h-2;
	for(i=1;i<=h;i++){
	    printf("*");
	    for(j=1;j<=i;j++){
	       if(i<(h/2+2))
	          if(j<i)
	          printf(" ");
	          else
	          printf("*");
	       else
	          if(j=h-i-2)
	          printf(" ");
	          else
	          printf("*"); }
	    printf("\n"); }
	printf("*");
	return 0; }