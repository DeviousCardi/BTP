#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,f ;
	i=1;f=0;
	scanf("%d",&h);
	while(i<=h/2+1)
	{ j=0;
	  while(j<=h)
	  {if(j>(h/2)-i&&j<(h/2)+i)
	    { printf("%c",'*');
	      f++; }
	   else if(f<(h/2)-i)
	   printf("%c",' ');
	    j++; }
	  printf("\n");
	  i++; }
	i=i-2;
	while(i>=0)
	{ j=0;
	  while(j<=h)
	  {if(j>(h/2)-i&&j<(h/2)+i)
	    printf("%c",'*');
	   else
	    printf("%c",' ');
	    j++; }
	  printf("\n");
	  i--; }
	return 0; }