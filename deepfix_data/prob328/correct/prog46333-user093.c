#include <stdio.h>
#include <stdlib.h>
int fabonacci(int n)
{if(n==0)
 return(0);
 if(n==1)
 return(1);
 else
 return(fabonacci(n-1)+n); }
int main() {
	int t,k,i,f[20];
	for(i=0;i<20;i++)
	{f[i]=fabonacci(i); }
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{ int c=0;
	    scanf("%d",&k);
	  for(i=0;i<20;i++)
	  {if(k==f[i])
	   c++; }
	  if(c!=0)
	  printf("yes\n");
	  else
	  printf("no\n"); }
		return 0; }