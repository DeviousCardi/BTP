#include <stdio.h>
#include <stdlib.h>
int fibo_term(int a);
int main() {
	int t;
	scanf("%d\n",&t);
	int i,k;
	for(i=0;i<t;i++) {
	scanf("%d\n",&k);
	printf("%d\n",fibo_term(k)); }
	return 0; }
int fibo_term(int a) {
    if(a==1)
    return 0;
    else if(a==2)
    return 1;
    else return fibo_term(a-1)+fibo_term(a-2); }