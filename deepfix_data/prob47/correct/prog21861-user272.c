#include <stdio.h>
#include <stdlib.h>
 int cat_no(int n);
int main() {
   	int testcases,j,i;
	scanf("%d\n",&testcases);
	int A[testcases];
	for(i=0;i<testcases;i++) {
	    scanf("%d\n",&A[i]); }
	for(j=0;j<testcases;j++) {
	int sum=cat_no(A[j]);
	printf("%d\n",sum); {
	    printf("%d\n",sum); } }
return 0; }
int cat_no(int n)
{  int summ=0;
    if(n==0)
    summ=summ+0;
    else
    summ = summ + (cat_no(n-1)*2*n*((2*n)-1)/(n+2));
    return summ; }