#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j=0;
    int s[1000];
	for(i=1; i<=n/2; i++)    {
	    if(n%i==0)  {
	        s[j] = i;
	        j++; }
	    else continue; }
	int sum = 0;
	for(i=0; i<=j; i++)   {
	    sum = sum + s[i]; }
	if(n==0)      printf("NO");
	if(sum==n)    printf("YES");
	if(sum!=n)    printf("NO");
	return 0; }