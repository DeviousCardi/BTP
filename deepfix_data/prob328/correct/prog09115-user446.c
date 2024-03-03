#include <stdio.h>
#include <stdlib.h>
void fib(int fibterm[],int n){
    if(n<20){
        fibterm[n]=fibterm[n-1]+fibterm[n-2];
        fib(fibterm,n+1); }
    else return; }
int main() {
    int i,k;
    int fibterm[20];
    fibterm[0]=0;
    fibterm[1]=1;
	fib(fibterm,2);
	scanf("%d",&k);
	for(i=0;i<20;i++){
	    if(fibterm[i]==k){
	        printf("yes");
	        return 0; } }
	printf("no");
	return 0; }