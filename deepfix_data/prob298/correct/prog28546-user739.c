#include <stdio.h>
#include <stdlib.h>
int catlan(int n) {
    int k;
    if(n==1)
    return 1;
    else
    k=2*catlan(n-1)*(2*n-1)/(n+1);
    return k; }
int main() {
    int i,t,k;
	scanf("%d",&t);
	int str[t];
	int cat[18];
	for(i=0;i<t;i++) {
	    scanf("%d",&str[i]); }
    for(i=0;i<18;i++) {
        cat[i]=catlan(i); }
    printf("%d",cat[5]);
	return 0; }