#include <stdio.h>
#include <stdlib.h>
int term(int n) {
    if(n==0)
    return 1;
    return term(n-1); }
int search(int n,int k) {
 if(n>=0) {
    if(term(n)==k)
    return 1;
    return search(n-1,k); }
 else
 return 0; }
int main() {
	int i,k,t,n=17;
	scanf("%d",&t);
	for(i=0;i<=17;i++)
	printf("%d\n",term(i));
	for(i=1;i<=t;i++) {
	    scanf("%d",&k);
	    if(search(n,k))
	    printf("yes\n");
	    else
	    printf("no\n"); }
	return 0; }