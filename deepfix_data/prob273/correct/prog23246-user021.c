#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=(n+1)/2;i=i+1){
	     for(j=1;j<=i;j=j+1){
	       if(j<=(n+1)/2-i){
	           printf("\t"); }
	       else{
	           printf("%d",j); } }
	    printf("\n"); }
	return 0; }