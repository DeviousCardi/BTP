#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h,b,k;
	scanf("%d%d", &h,&b);
	for(i=1;i<=h;i=i+1){
	    for(j=1;j<=h-i;j=j+1){
	        printf(" "); }
	    for(k=1;k<=b-2*i;k=k+1) {
	      printf("%d" ,k); }
	    printf("\n") ; }
	return 0; }