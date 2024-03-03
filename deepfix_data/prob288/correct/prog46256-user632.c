#include <stdio.h>
#include <stdlib.h>
int main() {
	       int i,j,k,n;
	       scanf("%d",&n);
	       for(i=1;i<=n+1;i++) {
	           for(j=1;j<=(n+1-i);j++)
	           {printf(" ");}
	           if(n%2==0)
	           {for(k=1;k<=i;k++)
	           {if(k%2==1)
	           printf("*");
	           if(k%2==0)
	           printf("x");}}
	           else{
	               for(k=1;k<=i;k++)
	           {if(k%2==1)
	           printf("x");
	           if(k%2==0)
	           printf("*");} }
	           printf("\n"); }
	return 0; }