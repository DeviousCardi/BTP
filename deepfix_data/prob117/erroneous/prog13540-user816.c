#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int term(int n) {
   int a;
   a=pow(2,n-1);
   return a }
int search(int n ,int k) {
    if(term(n)>k)
    return 0;
    if(term(n)==k)
    return 1;
    return search(n+1,k); }
int main() {
	int t,k,i,n=0;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d",&k);
	    if(search(n,k))
	    printf("yes\n");
	    else
	    printf("no\n"); }
	return 0; }