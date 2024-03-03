#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    int k ;
    if(n==1) return 1 ;
    else if(n==0) return 1 ;
    k = (2*(2*n-1)/n+1);
    printf("  %d",k);
    return k*cat(n-1); }
int main() {
    int t , k , i ;
    scanf("%d\n",&t);
    for(i=0 ; i <t ; i++){
        scanf("%d",&k);
        printf(" %d\n",cat(k)); }
	return 0; }