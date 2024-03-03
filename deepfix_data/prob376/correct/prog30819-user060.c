#include <stdio.h>
#include <stdlib.h>
float catalan(int n,int k){
    if(n>=0){
    if(n==1||n==0) return 1.0;
    else return catalan(n-1,k)*((k+n)*1.0/n); } }
int main() {
	int s;
	scanf("%d",&s);
	printf("%.0f",catalan(s,s));
	return 0; }