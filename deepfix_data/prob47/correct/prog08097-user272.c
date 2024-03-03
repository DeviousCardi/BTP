#include <stdio.h>
#include <stdlib.h>
 int cat_no(int n);
int main() {
   	int testcases,j,i;
	scanf("%d",&testcases);
	int A[testcases];
	for(i=0;i<testcases;i++) {
	    scanf("%d",&A[i]); }
	for(j=0;j<testcases;j++) { {
	    printf("%d\n",cat_no(A[j])); } }
return 0; }
int cat_no(int n)
{  int summ=0;
    if(n==0)
    summ=summ+1;
    else
    summ = summ + (2*(2*n-1)*cat_no(n-1))/(n+1);
    return summ; }