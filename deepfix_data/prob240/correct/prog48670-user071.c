#include <stdio.h>
#include <stdlib.h>
int cata(n){
    if (n==0) return 1;
    else {
        return (cata(n-1))*(2*(2*n-1))/(n+1); } }
int main() {
	int m,i,j=0,x;
	scanf("%d",&m);
	for(i=1;i<m+1;i++){
	    scanf("%d",&x);
	   if (cata(j)<x){
	       j++;
	       printf("%d\n",j); }
	  printf("%d",cata(j));
	  printf("\n"); }
	return 0; }