#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n<=1)
    return 1;
    int result=0;
    for(i=0;i<n;i++)
        result=result+catalan(i)*catalan(n-1-i);
    return result; }
int main() {
    int tests,i;
    scanf("%d",&tests);
    int case[tests];
    for(i=0;i<tests;i++)
    scanf("%d",&case[i]);
	for(i=0;i<tests;i++)
	    {int result=catalan(case[i]);
	     printf("%d\n",result); }
	return 0; }