#include <stdio.h>
#include <stdlib.h>
int toh(int n) {
    if(n==1)
    return 1;
    else
    return 2*toh(n-1)+1; }
int main() {
	int i,t,k[20];
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k[i]); }
	for(i=0;i<t;i++) {
	    printf("%d",toh(k[i]);) }
	return 0; }