#include <stdio.h>
#include <stdlib.h>
int catlan(int  n){
    if(n<=1)
    return 1;
    else return 2*((2*n-1)/n+1)*catlan(n-1); }
int main() {
	int t,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&j);
	    printf("%d\n",catlan(j)); }
	return 0; }