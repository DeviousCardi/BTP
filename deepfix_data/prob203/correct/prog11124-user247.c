#include <stdio.h>
int main() {
	int x[50],n,i,j,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   scanf("%d",&x[i]); }
	for(i=0;i<n;i++)
	{   for (j=0;j<i;j++)
	    {   if (x[i]==x[j])
	            {flag=0;
	                printf("YES");break;}
	        else
	            {flag=1;} }
	}if (flag==1)
	    {printf("NO");}
	return 0; }