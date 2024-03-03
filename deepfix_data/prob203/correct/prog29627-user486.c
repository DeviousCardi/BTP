#include <stdio.h>
int main() {
	int i,j,k,n,c;
	scanf("%d",&n);int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{  for(j=0;j<n;j++)
	   {if(a[i]==a[j])
	    {printf("YES");
	     c=99999;
	     break;} } }
	if(c!=99999)
	printf("NO"); }