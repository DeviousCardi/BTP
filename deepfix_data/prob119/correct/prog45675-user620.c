#include <stdio.h>
#include <stdlib.h>
int power(int n){
    if(n==1)
        return 2;
    int res=1;
    return 2*power(n-1); }
int main() {
	int tests,i;
	scanf("%d",&tests);
	int cases[tests];
	for(i=0;i<tests;i++)
	  scanf("%d",&cases[i]);
	for(i=0;i<tests;i++);
	   {if(cases[i]==0)
	   printf("0");
	   printf("%d",power(cases[i])-1); }
	return 0; }