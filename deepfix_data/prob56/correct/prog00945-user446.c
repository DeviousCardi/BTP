#include <stdio.h>
#include <stdlib.h>
int t=0;
int cat(int n){
    if(n==0)return 1;
    t=cat(n-1);
    return t*2*(2*n-1)/(n+1); }
int main() {
	int t;
	scanf("%d",&t);
	printf("%d",cat(4));
	return 0; }