#include <stdio.h>
#include <stdlib.h>
long int fact(int i) {
 if(i==0)
 return 1;
 else
 return i*fact(i-1); }
int main() {
	int sum=0,testcases,t,i;
	scanf("%d\n",&testcases);
	t=testcases;
	int A[t];
	for(i=0;i<testcases;i++) {
	    scanf("%d\n",&A[i]);
	    printf("%d\n",A[i]); }
	for(i=0;i<t;i++) {
	sum=sum+(fact(2*A[i])/A[i]+1)/fact(A[i]); {
	    printf("%d\n",sum); } }
return 0; }