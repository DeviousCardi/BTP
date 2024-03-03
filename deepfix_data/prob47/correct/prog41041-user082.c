#include <stdio.h>
#include <stdlib.h>
int Catalan_no(int n) {
    int i,sum=0;
    if(n<0) {
        return 0; }
    if(n==0) {
        return 1; }
    if(i==n)
    return sum;
    else {
    for(i=0;i<n;i++)
    sum+=Catalan_no(i)*Catalan_no(n-1-i); } }
int main() {
	int i,k,t;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k);
	    printf("%d\n",Catalan_no(k)); }
	return 0; }