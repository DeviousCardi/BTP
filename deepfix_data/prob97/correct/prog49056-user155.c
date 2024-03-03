#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i=0,j=0,k=0;
	scanf("%d",&h);
	for(i=0;i<h;i++)
	{   for(j=0;j<(h-1-i);j++)
	    {printf("%c",' ');}
	    for(k=(h-i);k<(h+i);k++)
	    {printf("%d\n",k);} }
	return 0; }