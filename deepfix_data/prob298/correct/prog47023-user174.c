#include <stdio.h>
#include <stdlib.h>
int sum=0;int k,flag;
int catalan(int n)
{ if (n<=1)
return 1;
int i;
for(i=0;i<n;i++) {
    sum+=catalan(i)*catalan(n-i-1);
    if(sum==k)
    {flag=1;return sum;} }
return sum; }
int main() {
    flag=0;
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    sum=catalan(3);
	    printf("%d",sum);
	    if (sum==k)
	    printf("yes");
	    else
	    printf("no"); }
	return 0; }