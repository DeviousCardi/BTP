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
int main() {
	int t,i;
	double k,n;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
    scanf("%lf",&k)
    n=0;terms=1;
    while(k>terms) {
        terms=term(n);
        if(k==terms) {
        printf("yes\n");
        break; }
        n++; }
    if(k>terms)
    printf("no\n"); }
	return 0; }