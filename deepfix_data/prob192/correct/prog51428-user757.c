#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j ;
	i=1;j=1;
	scanf("%d",&h);
	while(i<=h)
	{ while(j<=h)
	  {if(j>(h/2)+i||j<(h/2)-i)
	   printf("%c",'*');
	   j++; }
	  printf("\n");
	  i++; }
	return 0; }