#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d\n", &n);
	int p[n];
	int i;
	for (i=0;i<=n-1;i++)
	    scanf("%d\n", &p[i]);
	int t,j;
	    scanf("%d\n", &t);
	if (n==1)
	    printf ("Yes\n");
	else
    	{for (i=1;i<=t;i++) {
    	        scanf ("%d\n", &j);
    	        if (j==0)
    	            {if(p[j]>p[j+1])
    	            printf("Yes\n");
    	            else printf("No\n");}
    	       else {if (j==n-1)
    	                {if(p[j]>p[j-1])
    	                printf("Yes\n");
    	                else printf("No\n");}
    	           else {if (p[j]>p[j-1]&&p[j]>p[j+1])
        	            printf("Yes\n");
        	            else printf("No\n");}}
    	    }}
	return 0; }