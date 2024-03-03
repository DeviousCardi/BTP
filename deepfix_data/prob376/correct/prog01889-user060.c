#include <stdio.h>
#include <stdlib.h>
int catalan(float n,float k){
    if(n>=0){
    if(n==1||n==0) return 1;
    else return catalan(n-1,k)*(((k+n))/n); } }
int main() {
	float n,s,k;
	scanf("%f",&s);
	n=s;
	k=s;
	printf("%f",catalan(n,k));
	return 0; }