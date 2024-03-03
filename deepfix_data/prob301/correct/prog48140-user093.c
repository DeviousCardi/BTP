#include <stdio.h>
#include <stdlib.h>
int main()
{   int x[10000];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        { scanf("%d",&x[i]); }
    if(n%2==0)
        { printf("%d %d\n",x[n/2]); }
    else if(n%2!=0)
	    { printf("%d",x[((n+1)/2)-1]); }
	return 0; }