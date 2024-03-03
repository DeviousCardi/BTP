#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if (n==0) return 1;
    else return (2*((2*n)-1)*cat(n-1))/(n+1); }
int sum(int a){
    if (a==0) return 0;
    else return sum(a-1)+cat(a); }
int main() {
	int t,i;
	scanf("%d\n",&t);
	for (i=1;i<=t;i++){
	    int n;
	    scanf("%d\n",&n);
	    printf("%d\n",sum(n)); }
	return 0; }