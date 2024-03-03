#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int resc=0;
    if(n==0)
	return 1;
	for (i=0;i<n;i++){
	    resc+=catalan(i)*catalan(n-1-i);
	return resc; } }
int main() {
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    printf("%d\n",catalan(k)); }
	return 0; }