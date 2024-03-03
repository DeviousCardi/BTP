#include <stdio.h>
int main() {
	int x[50],n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   scanf("%d",&x[i]); }
	for(i=0;i<n;i++)
	{   for (j=0;j<i;j++)
	    {   if (x[i]==x[j])
	            {printf("YES");break;}
	        else
	            {printf("NO");break;} } }
	return 0; }