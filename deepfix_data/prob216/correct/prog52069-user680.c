#include <stdio.h>
#include <stdlib.h>
int  fib(int n){
    if(n<=2)
    return n-1;
    else return fib(n-1)+fib(n-2); }
int main() {
	int i,t,t_case;
	scanf("%d",&t_case);
	for(i=0;i<t_case;i++){
	    scanf("%d",&t);
	    printf("%d\n",fib(t)); }
	return 0; }