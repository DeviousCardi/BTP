#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    for(j=1;j<=(i-1);j++)
	    printf(" ");
	    for(j=1;j<=(2*(n-i)+1);j++)
	  {if((j==1)||(j==(2*(n-i)+1))||(i==1)||(i==n))
	  printf("*");}
	  printf("\n"); }
	return 0; }