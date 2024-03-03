#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,f;
	i=1;
	scanf("%d",&h);
	while(i<=h/2+1)
	{ j=0;f=0;
	  while(j<=h)
	  {  if(j<h/2+i&&j>h/2-i) {
	       printf("%d",(j+1)%10);
	       f++; }
	    else if(f<i)
	     printf("%c",' ');
	    j++; }
	  printf("\n");
	  i++; }
	for(i=i-2;i>0;i--)
	{ j=0;f=0;
	  while(j<=h)
	  { if(j<h/2+i&&j>h/2-i) {
	       printf("%d",(j+1)%10);
	       f++; }
	    else if(f<i)
	     printf("%c",' ');
	    j++; }
	  printf("\n"); }
	return 0; }