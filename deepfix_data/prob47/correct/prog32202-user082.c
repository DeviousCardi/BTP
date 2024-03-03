#include <stdio.h>
#include <stdlib.h>
int Catalan_no(int n,int i) {
    int sum=0;
    if(n==0) {
        return 1; }
    if(i>n) {
        return sum; }
    sum+=Catalan_no(n,i+1)*Catalan_no(n-i,i+1); }
int main() {
	int i,t,k;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k);
	    printf("%d\n",Catalan_no(k-1,0)); }
	return 0; }