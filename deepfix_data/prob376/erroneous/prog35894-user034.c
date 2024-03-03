#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,i;
	int cat(n){
	    if(n==0){return 1;}
	    else{return cat(n-1)*2*(2*n-1)/float(n+1);} }
	scanf("%d",&m);
	for(i=0;i<m;i++){
	    scanf("%d",&n);
	    printf("%d",cat(n)); }
	return 0; }