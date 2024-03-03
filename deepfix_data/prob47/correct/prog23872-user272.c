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
	for(j=0;j<testcases;j++)
	{ long int m=A[i];
	for(i=1;i<=m;i++) {
	sum=sum+cat_no(m); {
	    printf("%ld\n",sum); }
	}}
return 0; }
long int cat_no(long int n)
{  long int summ=0;
    if(n==0)
    return summ+1;
    else
  return summ = summ + (cat_no(n)*2*((2*n)-1)/(n+1));
    n=n-1; }