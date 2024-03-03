#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,x;
	scanf("%d",&n);
    x=n/2;
    if(i<=x){
	for(i=1;i<=x;i++) {
	   for(j=1;j<=i;++j)
	     printf("*");
	   printf("\n"); }
	   }else {
	       for(i=x+1;i<=n;++i) {
	           for(j=i;j<=i-1;++j)
	            printf("*");
	            printf("\n"); } }
	return 0; }