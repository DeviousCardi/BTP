#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0) return 1;
    else if(n==1) return 1;
    else return (catalan(n-1)*2*(2*n-1))/n+1; }
int main() {
	int i, j, t, k;
	scanf("%d", &t);
	printf("%d\n",(2*2*(2*3-1))/3+1);
	for(j=0; j<t; j++){
	    i=0;
	    scanf("%d", &k);
	    while(catalan(i)<=k){
	        i++; }
	    printf("%d\n", catalan(i)); }
	return 0; }