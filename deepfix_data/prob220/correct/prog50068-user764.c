#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1){
	    for(j=1;j<=i;j=j+1){
	     if(j=1){   printf("*");}
	    else if((j>1)&&(j<i)) {printf(" ");}
	    else if(j=i){printf("*");} }
	    printf("\n"); }
	return 0; }