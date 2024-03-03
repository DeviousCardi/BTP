#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,sum=0;
	 if(n==0)
	   return 1;
	 for(i=0;i<n;i++)
	    sum+=catalan(n-1-i)*catalan(i);
    return sum; }
int main() {
    int i,t,k;
scanf("%d\n",&t);
while(t--) {
        i=0;
        scanf("%d",&k);
      while(k>=catalan(i++));
        if(k==catalan(i-1))
        break;
    printf("%d\n",catalan(i)); }
    return 0; }