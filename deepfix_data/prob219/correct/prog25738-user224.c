#include <stdio.h>
#include <stdlib.h>
int main() {
	  int a,b,c,sec;
	  scanf("%d%d%d",&a,&b,&c);
	  if(a>b)
	  	  { if(a>c)
	     {if(b>c)
	       sec=b;
	       else
	       sec=c; }
	     else
	     {sec=a;} }
	else
	{if(b>c)
	  {if(a>c)
	sec=a;
	else
	sec=c; }
	  else
	  {sec=b;} }
	printf("%d",sec);
	return 0; }