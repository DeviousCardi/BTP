#include <stdio.h>
#include <stdlib.h>
int arr[100];
int catalan(int n)
{int sum=0, i;
    if(n==0||n==1)
    return 1;
    else
    {for(i=0;i<n;i++)
    sum=sum+catalan(i)*catalan(n-i-1);
    return sum; }
int main() {
	int t;
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	scanf("%d\n",arr[i]);
	for(i=0;i<t;i++)
	{int n=0;
	 while(catalan(n)<arr[i]) {
	     n++; }
	 printf("%d\n",catalan(n-1)); }
	return 0; }