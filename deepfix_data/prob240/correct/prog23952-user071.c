#include <stdio.h>
#include <stdlib.h>
int cata(n){
    if (n==0) return 1;
    else {
        return (cata(n-1))*(2*(2*n-1))/(n+1); }
    printf("%d",2*5-1); }
int main() {
	int m,i,j,x;
	scanf("%d",&m);
	for(i=1;i<m+1;i++){
	    scanf("%d",&x);
	      j=4;
	   if (cata(j)<x){
	       j++; }
	  printf("%d",cata(j-1));
	  printf("\n"); }
	return 0; }