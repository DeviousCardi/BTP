#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=n) {
	    if((i==1)||(i==n))
	    {printf("*");
	    i=i+1;
	    printf("\n"); }
	    else
	        if(i<=(n+1)/2)
	        {printf("*");
	        int j;
	        for(j=1; j<=i-2; j++)
	        printf(" ");
	        printf("*");
	        printf("\n");
	        i=i+1;}
	        else
	        {printf("*");
	        int j;
	        for(j=1; j<=n-i-1; j++)
	        printf(" ");
	        printf("*");
	        printf("\n");
	        i=i+1;} }
	return 0; }