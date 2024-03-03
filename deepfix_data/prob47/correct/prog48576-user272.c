#include <stdio.h>
#include <stdlib.h>
int cat_no(int n);
int main() {
	int testcases,j,i;
	int sum=0;
	scanf("%d\n",&testcases);
	int A[testcases];
	for(i=0;i<testcases;i++) {
	    scanf("%d\n",&A[i]); }
	for(j=0;j<testcases;j++) {
	for(i=1;i<=A[j];i++) {
	sum=sum+cat_no(A[j]); {
	    printf("%d",sum); }
	}}
return 0; }
int cat_no(int n)
{   int summ=0,i;
    if(n==0)
    return 1;
    else
    return summ = summ + (cat_no(i)*cat_no(n-i-1)); }