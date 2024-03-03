#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,k,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	 for(j=1;j<=n+1-i;j++) {
	    printf(" "); }
	 for(k=1;k<=n;k++) {
	     if((i+k)%2==0)
	    {printf("*");}
	    else{printf("x");} }
	 for(j=n+1;j<=i+n-1;j++)
	 {printf(" ");}
     printf("\n"); }
return 0; }