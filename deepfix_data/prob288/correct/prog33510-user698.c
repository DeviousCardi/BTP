#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j;
scanf("%d",&n);
for(i=1;i<=n;i++)
{    if(i<=n+1)
	   {for(j=1;j<=n-i+1;j++)
	        printf(" ");
	     for(j=n-i+2;j<=n;j++)
	      { if((j+i)%2==0)printf("x");
	          else printf("*"); } }
}	return 0; }