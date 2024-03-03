#include <stdio.h>
#include <stdlib.h>
int main() {int n;
    scanf("%d",&n);int t=n;int i,j,k;
	for(i=1;i<=(n+1);i++) {
	    for(k=t;k>=0;k--)
	    {printf(" ");}
	    for(j=1;j<=i;j++)
	    {if(n%2==0) {
	        if((j%2)==0)
	        printf("X");
	        else
	        printf("*");}
	        else
	        {if((j%2)==0)
	        printf("*");
	        else
	        printf("X");}
	    }t=t-1;printf("\n");
	}t=1;
	for(i=n;i>=1;i--) {
	    for(k=1;k<=t;k++)
	    {printf(" ");}
	    for(j=1;j<=i;j++) {
	        if((j%2)==0)
	        printf("X");
	        else
	        printf("*");
	    }t=t+1;printf("\n");}
	return 0; }