#include <stdio.h>
#include <stdlib.h>
int fact(int n) {
    int fac=1,i;
    for(i=0;i<n;i++)
    fac*=i;
    return fac; }
double catalan(int k) {
    if(k==0)
    return 0.00;
    else
    return fact(2*k)/(fact(k+1)*fact(k)); }
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