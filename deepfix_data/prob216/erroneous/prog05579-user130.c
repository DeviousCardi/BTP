#include <stdio.h>
#include <stdlib.h>
int main() {
	int fib(int n)
	{int ans;
	  if(n==0)
	  ans=1;
	  if(n==1)
	   ans=1;
	  ans=fib(n-1)+fib(n-2);
	  return ans; }
	int main()
	{int t;
	    scanf("%d\n",&t);int a[t];int c=0;
	    for(i=0;i<t;i++) {
	        scanf("%d\n",&a[i]);c++;
	    }for(i=0;i<t;i++) {
	        printf("%d",fib(a[i]));
	        printf("\n"); }
	return 0; }