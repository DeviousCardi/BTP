#include <stdio.h>
#include <stdlib.h>
int cat( int n) {
    if (n=0)
    return 1;
    else if(n=1)
    return 1;
    else
    return (2*(2n+1)/n+1)*cat(n-1); }
int main() {
	int t,i,j;
	scanf("%d/n",&t);
	int a[t];
	for(i=0;i<t;i++)
	{ scanf("%d ",& a[i]);}
	for(i=0;i<t;i++) {
	    for(j=0;j<18;j++)
	    if( a[i]==cat(j))
	    {printf("yes");
	     return 0; }
	  {printf("no");
	return 0; }