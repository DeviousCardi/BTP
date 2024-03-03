#include <stdio.h>
#include <stdlib.h>
int fact(int x) {
    int p=1,j;
    for(j=1;j<=x;j++)
    p=p*j;
    return p; }
int term(int n) {
    int a;
    a=fact(2*n)/(fact(n+1)*fact(n));
    return a; }
int search(int n,int k) {
 if(n<17) {
    if(term(n)>k)
    return 0;
    if(term(n)==k)
    return 1;
    return search(n+1,k); }
 else
 return 0; }
int main() {
	int i,k,t,n=0;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d",&k);
	    if(search(n,k))
	    printf("yes\n");
	    else
	    printf("no\n"); }
	return 0; }