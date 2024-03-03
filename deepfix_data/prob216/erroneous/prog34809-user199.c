#include <stdio.h>
#include <stdlib.h>
int fibonacci(int k){
    if(k==1) return 0;
    if(k==2) return 1;
    return(fibonacci(k-1)+fibonacci(k-2)); }
int main() {
	int t,k,i;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&k);
	    printf("%d\n",fibonacci(k)) }
	return 0; }