#include <stdio.h>
#include <stdlib.h>
int fact(int n) {
    int i;
    int fact=1;
    for(i=1; i<=n; i++) {
        fact=fact*i; }
    return fact;
int main() {
	int p,n,k,b;
	scanf("%d",&p);
	if(n<k){
	b=0;}
	if((n=0)&&(k=0)){
	b=1;}
	if(k=0){
	b=1;}
	else
	b=fact(n)/(fact(k)*fact(n-k));
	if(b==p) {
	    printf("%d",n);
	    printf("%d",k); }
	else
	printf("-1");
	return 0; }