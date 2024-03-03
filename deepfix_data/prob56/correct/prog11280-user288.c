#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int f1(int n)
{int x=n;
    if(n==0||n==1)
    return 1;
   else if(n>=2)
    return(((x+n)/n)*f1(n-1)); }
int main() {
	int n,i,j,a[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	printf("%d\n",f1(a[i]));
	return 0; }