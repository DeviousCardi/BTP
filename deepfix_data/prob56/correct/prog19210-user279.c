#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,sum=0;
	 if(n==0||n==1)
	   return 1;
	 for(i=0;i<=n-1;i++)
	    sum+=catalan(n-i)*catalan(i);
    return sum; }
int main() {
    int i,t,k;
   for(i=0;i<10;i++)
   printf("%d\n",catalan(i));
    return 0; }