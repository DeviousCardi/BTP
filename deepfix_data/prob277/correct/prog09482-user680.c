#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,h;
	scanf("%d",&n);
	for (i=n;i>=1;i=i-2){
	 for(j=1;j<=(n-i)/2;j++){
	   printf("\t"); }
	for(h=1;h<=i;h++){
	    printf("*"); } }
	printf("\n");
	return 0; }