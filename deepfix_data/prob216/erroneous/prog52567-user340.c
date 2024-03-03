#include <stdio.h>
#include <stdlib.h>
int fib_num(int n){
    if(n<=1){
        return n; }
    else{
        return fib_num(n-1)+fib_num(n-2); } }
int main() {
	int t,tst[20];
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&tst[i]); }
	for(i=0;i<t;i++){
	    printf("%d\n",fib_num(tst[i])); }
	return 0; }