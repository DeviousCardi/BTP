#include <stdio.h>
#include <stdlib.h>
int Catalan_no(int n,int i) {
    if(n<0) {
        return 0; }
    if(n==0) {
        return 1; }
    else {
    return Catalan_no(i+1,0)*Catalan_no(n-1,0); } }
int main() {
	int i,t;
	long int k;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%ld\n",&k);
	    printf("%d\n",Catalan_no(k,0)); }
	return 0; }