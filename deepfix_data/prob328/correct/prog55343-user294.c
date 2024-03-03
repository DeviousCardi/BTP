#include <stdio.h>
#include <stdlib.h>
 int fibo(int n) {
  if(n==0)
  return 0;
  else if(n==1 || n==2)
  return 1;
  else
  return (fibo(n-1)+fibo(n-2)); }
int main() {
	int testcases,n,i;
	scanf("%d",&testcases);
	for(i=0; i<testcases; i++){
	    scanf("%d",&n); {
	    if(i==n)
	    printf("yes\n");
	    else
	    printf("no\n"); } }
	return 0; }