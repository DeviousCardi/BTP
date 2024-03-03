#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,j;
	scanf("%d",&a);
	for(i=a; i<a+1; i++)
	{printf("%d",a);
	    for(j=a-1; j<a+1; j++)
	    { printf("%d",j);
	      printf("\n");  } }
	    return 0; }