#include <stdio.h>
#include <stdlib.h>
int catalan(int n)
{int i,term=0;
    if(n==0)
    return 1;
 for(i=0;i<n;i++)
     term+=catalan(i)*catalan(n-1-i);
     return term; }
int main() {
int i,t,n,sum=0;
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	   { scanf("%d\n",&n);
	     for(i=0;i<n;i++)
	         sum+=catalan(n);
	     printf("%d\n",sum); }
	return 0; }