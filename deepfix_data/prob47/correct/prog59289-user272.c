#include <stdio.h>
#include <stdlib.h>
long int cat_no(long int n);
int main() {
   long	int testcases,j,i;
	long int sum=0;
	scanf("%ld\n",&testcases);
	long int A[testcases];
	for(i=0;i<testcases;i++) {
	    scanf("%ld\n",&A[i]); }
	for(j=0;j<testcases;j++) {
	for(i=1;i<=A[j];i++) {
	sum=sum+cat_no(A[j]); {
	    printf("%ld\n",sum); }
	}}
return 0; }
long int cat_no(long int n)
{  long int summ=0;
    if(n==0)
    return summ+1;
    else
    return summ = summ + (cat_no(n-1)*2*((2*n)-1)/(n+1)); }