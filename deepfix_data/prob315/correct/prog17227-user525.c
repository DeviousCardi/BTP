#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
	int i,j,ar[1000],ar1[1000];
	int l;
	for(i=1;1<=n;i++)
	{scanf("%d ",&ar[i]);}
	for(i=1;1<=n;i++)
	{ar1[i]=0;}
	for(j=1;j<=n;j++) {
	    for(i=1;i<=n-1;i++) {
	    if(ar[i]<ar[i+1])
	    {  l=ar[i];
	       ar[i]=ar[i+1];
	       ar[i+1]=l;
	       ar1[i]=ar1[i]+1; } } }
	int sum=0;
	for(i=1;1<=n;i++)
	sum=sum+ar1[i];
	printf("%d",sum);
	for(i=1;1<=n;i++)
	printf("%d ",ar1[i]);
	return 0; }