#include <stdio.h>
#include <stdlib.h>
int solve(int a)
{   if (a==0) return 0;
    else if (a==1) return 1;
    else return(2*(solve(a-1))-1); }
int main() {
	int t,k;
	scanf("%d\n",&t);
	for(k=0;k<t;k++)
	{   int g;
	    scanf("%d\n",&g);
	    int j=solve(g);
	    printf("%d\n",j); }
	return 0; }