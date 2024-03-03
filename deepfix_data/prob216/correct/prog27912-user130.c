#include <stdio.h>
#include <stdlib.h>
	int fib(int n)
	{int ans;
	  if(n==1)
	  ans=0;
	  if(n==2)
	   ans=1;
	  ans=fib(n-1)+fib(n-2);
	  return ans; }
	int main()
	{int t;
	    scanf("%d\n",&t);int a[t];int i;
	    for(i=0;i<t;i++) {
	        scanf("%d\n",&a[i]);
	    }for(i=0;i<t;i++) {
	        printf("%d",fib(a[i]));
	        printf("\n"); }
	return 0; }