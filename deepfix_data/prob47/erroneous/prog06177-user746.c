#include <stdio.h>
#include <stdlib.h>
double catalan(int k) {
    if(k==0)
    return 0;
    else
    return fact(2*n)/(fact(n+1)*fact)(n)) }
int main() {
	int t,i,j;
	double sum=0;
	scanf("%d",&t);
	int k[t];
	for(i=0;i<t;i++) {
	    scanf("%d",&k[i]); }
	for(i=0;i<t;i++) {
	   sum=0;
	   for(j=0;j<k[i];j++) {
	       sum+=catalan(j); }
	   printf("%lf\n",sum); }
	return 0; }