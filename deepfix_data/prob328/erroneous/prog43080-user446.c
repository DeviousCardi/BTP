#include <stdio.h>
#include <stdlib.h>
void fib(int fibterm[],int n){
    if(n<20){
        fibterm[n]=fibterm[n-1]+fibterm[n-2];
        fib(fibterm,n+1); }
    else return; }
int search(int a[],int n){
    int i;
    for(i=0;i<20;i++)if(a[i]==n)return 1;
    return 0; }
int main() {
    int i,k;
    int fibterm[20];
    fibterm[0]=0;
    fibterm[1]=1;
	fib(fibterm,2);
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    if(search(fibterm,k)){
	        printf("yes");
	        return 0; } }
	printf("no");
	return 0; }