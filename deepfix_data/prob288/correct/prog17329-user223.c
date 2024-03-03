#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,k,j,n;
	scanf("%d",&n);
	for(i=1;i<=n+1;i++) {
	 for(j=1;j<=n+1-i;j++) {
	    printf(" "); }
	 for(k=1;k<=n;k++) {
	     if((i+k)%2==0)
	    {printf("x");}
	    else{printf("*");} }
	 for(i=n+2;i<=2*n-1;i++){
	 for(j=n+1;j<=i+n-1;j++)
	 {printf(" ");}
     for(k=n+2;k<=2*n+1;k++)
     {if((i+k)%2==0)
     {printf("*");}
     else{printf("x");} } }
     printf("\n"); }
return 0; }