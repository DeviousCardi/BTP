#include <stdio.h>
#include <stdlib.h>
int main() {
	long n;
	int i;
    long sum=0;
	scanf("%l",&n);
	long a[(n/2)+1];
	for(i=1;i<n/2+1;i++) {
	    if(n%i==0)
	    {a[i]=i;}
	    else {a[i]=0;} }
	for(i=1;i<n/2+1;i++)
	{	    sum=sum+a[i]; }
	(sum==n)?printf("YES"):printf("NO");
	return 0; }