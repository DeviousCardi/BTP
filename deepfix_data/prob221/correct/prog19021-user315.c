#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,p,n;
	scanf("%d",&n);
	    for(i=0;i<2*n-1;i++)
	    {   printf("%c\n",'*'); }
	    for(j=1;j<=n-1;j++)
    	{   for(p=0;p<j;p++)
    	    {printf(" "); }
	        printf("%c",'*');
    	    for(k=0;k<n-2-2*j;k++)
	        {   printf(" "); }
	        printf("%c",'*'); }
	return 0; }