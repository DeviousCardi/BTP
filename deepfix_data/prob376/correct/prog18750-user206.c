#include <stdio.h>
#include <stdlib.h>
int catalan(int a) {
    if (a==0)   return 1;
    return ((2*((2*a)-1)/(a+1))*catalan(a-1)); }
int main() {
	int t;
	scanf("%d\n",&t);
	int k;
	for(k=0;k<t;k++)
	{   int h;
	    scanf("%d\n",&h);
	    printf("%d\n",catalan(h)); }
	return 0; }