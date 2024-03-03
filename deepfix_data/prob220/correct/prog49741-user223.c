#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1; i<=n-1; i++){
	    for(j=1; j<=n-i; j++){
	        if(j==(n+1-i)&&(n+i-1)){
	            printf("*");} } }
	if(i=n)
	{printf("*");}
	return 0; }