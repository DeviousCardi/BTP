#include <stdio.h>
#include <stdlib.h>
int j=1,c=1,o=1,a=0;
int catalan(int k)
{   c--;
    o--;
    if(c && o)
    j=j+2;
    else return 1;
    catalan(k-1); }
int main() {
	int t,i;
	scanf("%d",&t);
	int k[t];
	for(i=0;i<t;i++)
	scanf("%d",&k[i]);
	for(i=0;i<3;i++)
	{   c=i;o=i;
	    j=1;
	catalan(i);
	    printf("%d\n",j); }
	return 0; }