#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fib(int n) {
    if(n==0){
        return 0; }
    else if(n==1){
        return 1; }
    else{
        return fib(n-1)+fib(n-2); } }
int main() {
    int n,i;
	scanf("%d",&n);
	int b[n],k[n];
	for(i=0;i<n;i++) {
	    scanf("%d\n",&k[i]); }
	for(i=0;i<n;i++){
	    b[i]=fib(k[i]); }
	for(i=0;i<n;i++){
	    printf("%d\n",b[i-1]); }
	return 0; }