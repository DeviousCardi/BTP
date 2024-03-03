#include <stdio.h>
#include <stdlib.h>
 int fib(k){
    if (k == 1) return 0 ;
    if (k==2) return 1 ;
    else return fib(k-1) + fib(k-2) ; }
int main() {
    int t , k , i , j;
    scanf("%d\n",&t);
    printf("%d",t);
    for(i=0 ; i<t ; i++){
        scanf("%d\n",&k);
        printf(" %d",k);
	for(j=0;j<20;j++){
	    if (fib(j)==k) printf("yes") ;
	    else printf("no"); } }
	return 0; }