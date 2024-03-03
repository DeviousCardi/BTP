#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1; i<=n; i++){
	    for(j=1; j<=n+1-i; j++){
	        if(i=j){printf("*");}
	else        {printf(" ");} }
	        for(k=1;k<=n-i;k=k+1)
	        {printf(" ");}
	        printf("*");
	        printf("\n"); }
	return 0; }