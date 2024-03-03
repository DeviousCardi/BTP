#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,s,i,j,ar[n];
	scanf("%d\n",&n);
	scanf("%d\n",&s);
	for(i=0;i<n;i++)
	  {  scanf("%d ",&ar[i]); }
	  for(i=0;i<n;i++);
	  { for(j=0;j<n;j++)
	     {if(i=!j)
	      {if(ar[i]+ar[j]==s)
	        printf("(%d,%d)",ar[i],ar[j]); }
	      else
	      continue; } }
	return 0; }