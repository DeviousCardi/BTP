#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n,i;
	int Fib(n){
	    if (n==1){return 0;}
	    else if(n==2){return 1;}
	    else{
	    return Fib(n-1)+Fib(n-2);} }
	scanf("%d",&m);
	for(i=1;i<=m;i++){
	printf("%d",Fib(i));}
	return 0; }