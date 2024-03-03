#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n , x, k , p ;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1) {
	    x = (n-1)/2 - i +1;
	    for(k=(n-1)/2-i+1;k>=1;k=k-1) {
	        printf("\t"); }
	    for( p = 1 ; p<2*i ;p = p + 1 ) {
	        printf("%d",x+1);
	        x = x +1;
	        x = x %10; }
	    for(k=(n-1)/2 - i +1;k>=1;k=k-1) {
	        printf("\t"); }
	    printf("\n"); }
	return 0; }