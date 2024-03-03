#include <stdio.h>
#include <stdlib.h>
int fib(int n);
int main(){
	int t,i;
	scanf("%d",&t);
	int arr[t];
	for(i=0;i<t;i++) {
	    scanf("%d",&arr[i]);
	    printf("%d\n",fib(arr[i])); }
	return 0; }
int fib(int n){
    if(n=0)
    return 0;
    else if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else return(fib(n-1)+fib(n-2)); }