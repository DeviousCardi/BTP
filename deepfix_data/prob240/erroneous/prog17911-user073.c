#include <stdio.h>
#include <stdlib.h>
int Catalan(int n);
int main() {
	int t,i,j;
	scanf("%d",&t);
	int A[t];
	for(i=0;i<t;i++) {
	    scanf("%d\n",&A[i]); }
	for(j=0;j<t;j++) {
	    printf("%d\n",Catalan(A[j])); }
	return 0; }
int Catalan(int n+1) {
    if(n==1)
    return 1;
    if(n==2)
    return 1;
    else
    return 2*(2*n + 1)/(n+2)* Catalan(n); }