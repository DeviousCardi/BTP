#include <stdio.h>
#include <stdlib.h>
 int fib(k){
     int n;
    if (k<=1) return n ;
    else return fib(k-1) + fib(k-2) ; }
int main() {
    int t , k , i , j;
    scanf("%d\n",&t);
    printf("%d",t);
    for(i=0 ; i<t ; i++){
        scanf("%d\n",&k);
        printf(" %d",k);
	for(j=0;j<20;j++){
	    if (fib(j)==k) {printf("yes"); break;} }
  if(j==20) printf("no"); }
	return 0; }