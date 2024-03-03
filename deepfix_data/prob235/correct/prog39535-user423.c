#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n , x, k , p ;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1) {
	 x=(n-(2*i-1))/2 +1;
	 if(i<=(n+1)/2) {
	 for(k=1;k<=(n-(2*i-1))/2;k=k+1 ) {
	     printf(" "); }
	 for(p=1;p<=2*i-1;p=p+1) {
	     printf("%d",x);
	     x=x+1;
	     x=x%10; }
	  for(k=1;k<=(n-(2*i-1))/2;k=k+1 ) {
	     printf(" "); } }
	 printf("\n"); }
	return 0; }