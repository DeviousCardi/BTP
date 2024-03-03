#include <stdio.h>
#include <stdlib.h>
 int fib(k){
     int n;
    if (k<=1) return n ;
    else return fib(k-1) + fib(k-2) ; }
int main() {
    int t , k , i , j;
    scanf("%d\n",&t);
    for(i=0 ; i<t ; i++){
        scanf("%d\n",&k);
	for(j=0;j<20;j++){
	    if (fib(j)==k) {printf("yes\n"); break;}
	    	    else printf("  %d",fib(j)); }
  if(j==20) printf("no\n"); }
	return 0; }