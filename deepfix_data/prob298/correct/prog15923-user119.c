#include <stdio.h>
#include <stdlib.h>
double fact(int n) {
    int i;
    double f;
    for(i=1;i<=n;i++)
    f=f*i;
    return f; }
double term(int n) {
    double t;
    t=fact(2*n)/fact(n+1);
    t=t/fact(n);
    return t; }
int search(int n,int k) {
    if(term(n)>k)
    return 0;
    else if(term(n)==k)
    return 1;
    else
    return search(n+1,k); }
int main() {
	int t,i;
	double k,n;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
    scanf("%lf",&k);
    n=0;
    if(search(n,k))
    printf("yes\n");
    else
    printf("no\n"); }
	return 0; }