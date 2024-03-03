#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,f;
	i=1;
	scanf("%d",&h);
	while(i<=h/2+1)
	{ j=0;f=0;
	  while(j<=h)
	  {  if(j<h/2+i&&j>h/2-i)
	     { if(j%10==0)
	       printf("%d",0);
	       else
	       printf("%d",(j%10)+1);
	       f++; }
	    else if(f<i)
	     printf("%c",' ');
	    j++; }
	  printf("\n");
	  i++; }
	i=i-2;
	while(i>0)
	{ j=0;f=0;
	  while(j<=h)
	  { if(j<h/2+i&&j>h/2-i)
	     { if(j%9==0)
	       printf("%d",0);
	       else
	       printf("%d",(j%10)+1);
	       f++; }
	    else if(f<i)
	     printf("%c",' ');
	    j++; }
	  printf("\n");
	  i--; }
	return 0; }