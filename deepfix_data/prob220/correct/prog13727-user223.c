#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=0; i<n-1; i++){
	    for(j=1;j<=2*n-1;j++){
	        if(j==(n+i)||j==(n-i)){
	            printf("*");}
	            else if(j>=n+i)
	            {continue;}
	            else
	            {printf(" ");} }
	        printf("\n");
	    }if( i==(n-1))
	 { for(k=1;k<=2*n-1;k++){
	     printf("*");} }
	    return 0; }