#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,p,b,n;
	scanf("%d",&n);
	    for(i=0;i<2*n-1;i++)
	    {   printf("%c",'*'); }
	    printf("\n");
	    for(j=1;j<=n-2;j++)
    	{   for(p=0;p<j;p++)
    	    {printf(" "); }
	        printf("%c",'*');
    	    for(k=0;k<(2*n-1)-2-2*j;k++)
	        {   printf(" "); }
	        printf("%c\n",'*'); }
    	for(b=0;b<n-1;b++)  {printf(" ");}
    	printf("%c",'*');
	return 0; }