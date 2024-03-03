#include <stdio.h>
#include <stdlib.h>
 int cat_no(int n);
 int cat_sum(int n);
int main() {
   	int testcases,j,i;
	scanf("%d",&testcases);
	int A[testcases];
	for(i=0;i<testcases;i++) {
	    scanf("%d",&A[i]); }
	for(j=0;j<testcases;j++) { {
	    printf("%d\n",cat_sum(A[j])); } }
return 0; }
int cat_no(int n) {
    if(n==0)
    return 1;
    else
    return (2*(2*n-1)*cat_no(n-1))/(n+1); }
int cat_sum(int n)
{    int i, sum=0;
    for(i=0;i<n;i++) {
        sum = sum + cat_no(i); } }