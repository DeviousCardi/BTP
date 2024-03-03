#include <stdio.h>
#include <stdlib.h>
 int fib(int n) {
  if(n==0)
  return 0;
  else if(n==1 || n==2)
  return n;
  else
  return (fib(n-1)+fib(n-2)); }
int main() {
	int  testcases,i=0,j=0,S[20],a;
	scanf("%d\n",&testcases);
	for(j=0; j<testcases; j++) {
	    scanf("%d\n",&S[j]); }
	for(j=0; j<testcases; j++){
	    a=0;
	   for(i=0; i<20; i++){
	      if(S[j]==fib(i)){a=1;} }
	   if(a==1) {
	        printf("yes\n"); }
	       else {
	 	    printf("no\n"); } }
	return 0; }