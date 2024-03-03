#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,k;
	scanf("%d",&n);
	for(i=0;i<(n+1)/2;i++) {
	    for(j=1;j<=(n+1)/2+i;j++)
	    {  k=j%10;
	        if (j<(n+1)/2 - i)
	        printf(" ");
	        else
	        printf("%d",k); }
	    printf("\n"); }
	for(i=0;i<=(n+1)/2-1;i++) {
	    for(j=1;j<n-i;j++)
	    {    k=j%10;
	        if (j-1<=i)
	       { printf(" ");}
	        else
	        {printf("%d",k);} }
	    printf("\n"); }
	return 0; }