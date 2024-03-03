#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int i;
    if(n<=1)
      return 1;
    int result=0;
    for(i=0;i<n;i++)
        result=result+catalan(i)*catalan(n-1-i);
    return result; }
int main() {
    int tests,i,j;
    scanf("%d",&tests);
    int cases[tests];
    for(i=0;i<tests;i++)
        scanf("%d",&cases[i]);
	for(i=0;i<tests;i++) {
	 int result=0,temp;
	 for(j=0;;j++) {
	     temp=result;
	     result=catalan(j);
	     if(result>=cases[i])
	        break; }
	     printf("%d\n",temp); }
	return 0; }