#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n<=1) return 1 ;
     return ((2*(2*n-1))/n+1)*cat(n-1); }
int main() {
    int t , k , i ;
    scanf("%d\n",&t);
    for(i=0 ; i <t ; i++){
        scanf("%d",&k);
        printf("%d",cat(k)); }
	return 0; }