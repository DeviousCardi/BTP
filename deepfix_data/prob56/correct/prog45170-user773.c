#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0) return 1;
    else if(n==1) return 1;
    else return (catalan(n-1)*(2*(2*n-1)))/n+1; }
int main() {
	int i=0, j, t, k;
	scanf("%d", &t);
	for(j=0; j<t; j++){
	    scanf("%d", &k);
	    while(catalan(i)<=k){
	        i++; }
	    printf("%d", catalan(i)); }
	return 0; }