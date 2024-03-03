#include <stdio.h>
#include <stdlib.h>
long int fact(int i) {
 if(i==0)
 return 1;
 else
 return i*fact(i-1); }
int main() {
	int t=0,testcases,i;
	scanf("%d\n",&testcases);
	int A[testcases];
	for(i=0;i<testcases;i++) {
	    scanf("%d\n",&A[i]); }
	for(i=0;i<testcases;i++) {
	    sum=sum+(fact(2*A[j])/A[j]+1)/fact(A[j]);
        printf("%d\n",sum); }
return 0; }