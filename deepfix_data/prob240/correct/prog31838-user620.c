#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int i;
    if(n==1 ||n==0)
      return 1;
    int result=0;
    for(i=0;i<n;i++)
        result=result+catalan(i)*catalan(n-1-i); }
int main() {
    int tests,i;
    scanf("%d",&tests);
    int cases[tests];
    for(i=0;i<tests;i++)
        scanf("%d",&cases[i]);
	for(i=0;i<tests;i++)
	    {int result=0;
	     result+=catalan(cases[i]);
	     printf("%d\n",result); }
	return 0; }