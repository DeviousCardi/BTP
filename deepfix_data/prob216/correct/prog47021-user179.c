#include <stdio.h>
#include <stdlib.h>
int fibo(int n){
    if(n<=1)
       return n;
    else
       return fibo(n-1)+fibo(n-2); }
int main() {
	int t,b[21],i;
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	   scanf("%d\n",&b[i]);
	for(i=0;i<t;i++){
	    printf("%d",fibo(b[i]-1));
	    printf("\n"); }
	return 0; }