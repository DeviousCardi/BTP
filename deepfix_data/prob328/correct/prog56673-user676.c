#include <stdio.h>
#include <stdlib.h>
int Fibonacci(int k){
      if(k==0)
      return 0;
      else if(k==1)
      return 1;
      else
      return (Fibonacci(k-1)+Fibonacci(k-2)); }
int main() {
	int t,k,i,j,flag=0;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	  scanf("%d\n",&k);
	  for(j=0;j<20;j++) {
	    if(k==Fibonacci(j)) {
	        flag=1;
	        break; } }
	  if(flag==1) {
	      printf("yes\n"); }
	  else {
	      printf("no\n"); } }
	return 0; }