#include <stdio.h>
#include <stdlib.h>
int cat(int k){
    if(k==0)
    return 1;
    return (4*k+2)*cat(k-1)/(k+2); }
int main() {
	int k,t,i;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&k);
	    printf("%d\n",cat(k-1)); }
	return 0; }