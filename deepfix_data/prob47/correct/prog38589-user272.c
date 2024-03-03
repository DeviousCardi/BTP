#include <stdio.h>
#include <stdlib.h>
int cat_no(int n);
int main() {
	int testcases,j,i;
	int sum=0;
	scanf("%d\n",&testcases);
	int A[testcases];
	for(i=0;i<testcases;i++) {
	    scanf("%d\n",&A[i]);
	    printf("%d",A[i]); }
	for(j=0;j<testcases;j++) {
	for(i=1;i<=A[j];i++) {
	sum=sum+cat_no(A[j]); {
	    printf("%d",sum); }
	}}
return 0; }
int cat_no(int n)
{   int summ=0;
    if(n==0)
    return summ+1;
    else
    return summ = summ + cat_no(n-1)*2*(2*n-1)/n+1; }